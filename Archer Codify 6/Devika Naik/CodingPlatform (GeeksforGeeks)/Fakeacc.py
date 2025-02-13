from flask import Flask, request, jsonify, render_template
import pandas as pd
import numpy as np
import joblib
from sklearn.preprocessing import StandardScaler

app = Flask(__name__)

# Load dataset
df = pd.read_csv(r"IJECE_df_train.csv")

# Preprocess data
df["pic"] = df["pic"].astype(int)
df["pr"] = df["pr"].apply(lambda x: 1 if x == "public" else 0)
df["cs"] = df["cs"].apply(lambda x: 1 if x == "verified" else 0)
df["fake"] = df["fake"].astype(int)
df["url"] = df["url"].fillna("")

# Select features and target
features = ['nfollowing', 'nfollower', 'pic', 'pr', 'cs', 'hasMedia']
X = df[features]
y = df["fake"]

# Load trained model and scaler
classifier = joblib.load("random_forest_model.pkl")
scaler = joblib.load("scaler.pkl")

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/predict', methods=['POST'])
def predict():
    try:
        data = request.json
        features_input = np.array([[
            data["nfollowing"],
            data["nfollower"],
            data["pic"],
            data["pr"],
            data["cs"],
            data["hasMedia"]
        ]])
        
        features_scaled = scaler.transform(features_input)
        prediction = classifier.predict(features_scaled)[0]
        
        result = "Account is Fake" if prediction == 1 else "Account is Real"
        return jsonify({"result": result})
    except Exception as e:
        return jsonify({"error": str(e)})

if __name__ == '__main__':
    app.run(debug=True)