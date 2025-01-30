package com.example.loginapp;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {


    Button loginBtn;

    EditText username, password;

    CheckBox c1,c2,c3,c4,c5,c6,c7,c8,c9;

    RadioGroup radgen;

    RadioButton male,female,other;

    EditText dob;

    Spinner selectcity;

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        username = findViewById(R.id.username);
        password = findViewById(R.id.password);
        c1 = findViewById(R.id.c1);
        c2 = findViewById(R.id.c2);
        c3 = findViewById(R.id.c3);
        c4 = findViewById(R.id.c4);
        c5 = findViewById(R.id.c5);
        c6 = findViewById(R.id.c6);
        c7 = findViewById(R.id.c7);
        c8 = findViewById(R.id.c8);
        c9 = findViewById(R.id.c9);
        radgen = findViewById(R.id.radgen);
        male = findViewById(R.id.male);
        female = findViewById(R.id.female);
        other = findViewById(R.id.other);
        dob = findViewById(R.id.dob);
        selectcity = findViewById(R.id.selectcity);
        loginBtn = findViewById(R.id.lgnbtn);

        setUpSpinner();

        loginBtn.setOnClickListener(view -> handleLogin());

    }

    private void setUpSpinner() {
        String[] cities = {
                "Select City", "Pune", "Mumbai", "Delhi", "Bangalore", "Chennai", "Hyderabad",
                "Ahmedabad", "Kolkata", "Jaipur", "Lucknow", "Kanpur", "Nagpur", "Patna", "Indore",
                "Thane", "Nashik", "Bhopal", "Vadodara", "Ghaziabad", "Ludhiana", "Agra", "Meerut"
        };

        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, cities);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_item);
        selectcity.setAdapter(adapter);
    }

    private void handleLogin() {
        String Username = username.getText().toString().trim();
        String Password = password.getText().toString().trim();
        int selectedId = radgen.getCheckedRadioButtonId();
        String selectedCity = selectcity.getSelectedItem().toString();

        ArrayList<String> selectedCourses = new ArrayList<>();
        if (c1.isChecked()) selectedCourses.add(c1.getText().toString());
        if (c2.isChecked()) selectedCourses.add(c2.getText().toString());
        if (c3.isChecked()) selectedCourses.add(c3.getText().toString());
        if (c4.isChecked()) selectedCourses.add(c4.getText().toString());
        if (c5.isChecked()) selectedCourses.add(c5.getText().toString());
        if (c6.isChecked()) selectedCourses.add(c6.getText().toString());
        if (c7.isChecked()) selectedCourses.add(c7.getText().toString());
        if (c9.isChecked()) selectedCourses.add(c9.getText().toString());
        if (c8.isChecked()) selectedCourses.add(c8.getText().toString());


        if (Username.isEmpty() || Password.isEmpty() || selectedCourses.isEmpty()) {
            Toast.makeText(MainActivity.this, "Please fill all the fields", Toast.LENGTH_SHORT).show();
            return;
        }

        String selectedOptionString = String.join(", ", selectedCourses);
        RadioButton selectedRadioButton = findViewById(selectedId);
        String selectedOption = selectedRadioButton.getText().toString();


        Intent intent = new Intent(MainActivity.this, MainActivity2.class);
        intent.putExtra("USER_INPUT", Username);
        intent.putExtra("PASS_INPUT", Password);
        intent.putExtra("COURSES_INPUT", selectedOptionString);
        intent.putExtra("GENDER_INPUT", selectedOption);
        intent.putExtra("CITY_INPUT", selectedCity);
        startActivity(intent);
    }

}