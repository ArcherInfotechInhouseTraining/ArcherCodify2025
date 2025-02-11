package com.example.register;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Bundle;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.io.FileNotFoundException;
import java.io.InputStream;

public class Register_Data extends AppCompatActivity implements GestureDetector.OnGestureListener {
    LinearLayout mainCl;

    TextView user_name, pass, course, Gender, select_city, birthdate, skipBtn;
    GestureDetector gestureDetector;

    ImageView uploadedPhoto;


    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_register_data);
        user_name = findViewById(R.id.user);
        pass = findViewById(R.id.pass2);
        course = findViewById(R.id.courses);
        Gender = findViewById(R.id.gender);
        select_city= findViewById(R.id.add);
        birthdate=findViewById(R.id.birth);
        uploadedPhoto=findViewById(R.id.uploadedImage);
        skipBtn = findViewById(R.id.skipBtn);

        skipBtn.setOnClickListener(v -> startActivity(new Intent(Register_Data.this, Implicit_intent.class)));

        // Retrieve data from Intent

        String usernameValue = getIntent().getStringExtra("USER_INPUT");
        String passwordValue = getIntent().getStringExtra("PASS_INPUT");
        String coursesValue = getIntent().getStringExtra("COURSES_INPUT");
        String genderValue = getIntent().getStringExtra("GENDER_INPUT");
        String selectCityValue = getIntent().getStringExtra("CITY_INPUT");
        String  BirthChoose=getIntent().getStringExtra("Selected_date");
        String photoUriString =getIntent().getStringExtra("PHOTO_URI");

        // Display input data or fallback text

        user_name.setText(getFallbackText(usernameValue, "No Username"));
        pass.setText(getFallbackText(passwordValue, "No Password"));
        course.setText(getFallbackText(coursesValue, "No Courses Selected"));
        Gender.setText(getFallbackText(genderValue, "No Gender Selected"));
        select_city.setText(getFallbackText(selectCityValue, "No City"));
        birthdate.setText(getFallbackText(BirthChoose, "No date"));

        // Display the uploaded photo
        if (photoUriString != null) {
            try {
                Uri photoUri = Uri.parse(photoUriString);
                InputStream inputStream = getContentResolver().openInputStream(photoUri);
                Bitmap bitmap = BitmapFactory.decodeStream(inputStream);
                uploadedPhoto.setImageBitmap(bitmap);
            } catch (FileNotFoundException e) {
                e.printStackTrace();
                uploadedPhoto.setImageResource(R.drawable.img_1);
            }
        }else{
            uploadedPhoto.setImageResource(R.drawable.img_3);
        }

        // Initialize GestureDetector
        gestureDetector = new GestureDetector(this, this);

        // Set touch listener on main layout
        mainCl.setOnTouchListener((view, event) -> gestureDetector.onTouchEvent(event));
    }


    // Utility method for fallback text
    private String getFallbackText(String input, String fallback) {
        return input != null && !input.isEmpty() ? input : fallback;
    }

    // GestureDetector.OnGestureListener implementation
    @Override
    public boolean onDown(@NonNull MotionEvent e) {
        showToast("onDown Called");
        return true;
    }

    @Override
    public void onShowPress(@NonNull MotionEvent e) {
        showToast("onShowPress Called");
    }

    @Override
    public boolean onSingleTapUp(@NonNull MotionEvent e) {
        showToast("onSingleTapUp Called");
        return true;
    }

    @Override
    public boolean onScroll(@NonNull MotionEvent e1, @NonNull MotionEvent e2, float distanceX, float distanceY) {
        showToast("onScroll Called");
        return true;
    }

    @Override
    public void onLongPress(@NonNull MotionEvent e) {
        showToast("onLongPress Called");
    }

    @Override
    public boolean onFling(@NonNull MotionEvent e1, @NonNull MotionEvent e2, float velocityX, float velocityY) {
        showToast("onFling Called");
        return true;
    }

    // Helper method for displaying Toast messages
    private void showToast(String message) {
        Toast.makeText(this, message, Toast.LENGTH_SHORT).show();
    }
}
