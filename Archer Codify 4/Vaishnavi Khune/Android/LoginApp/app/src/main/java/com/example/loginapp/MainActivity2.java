package com.example.loginapp;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.widget.TextView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity2 extends AppCompatActivity {
    TextView username, password, courses, gender, city;

    @SuppressLint("MissingInflatedId")

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main2);


        username = findViewById(R.id.showuser);
        password= findViewById(R.id.showpass);
        courses = findViewById(R.id.usercourses);
        gender = findViewById(R.id.usergender);
        city = findViewById(R.id.usercity);

        String usernameValue = getIntent().getStringExtra("USER_INPUT");
        String passwordValue = getIntent().getStringExtra("PASS_INPUT");
        String coursesValue = getIntent().getStringExtra("COURSES_INPUT");
        String genderValue = getIntent().getStringExtra("GENDER_INPUT");
        String cityValue = getIntent().getStringExtra("CITY_INPUT");

        username.setText(getFallbackText(usernameValue, "No Username"));
        password.setText(getFallbackText(passwordValue, "No Password"));
        courses.setText(getFallbackText(coursesValue, "No Courses Selected"));
        gender.setText(getFallbackText(genderValue, "No Gender Selected"));
        city.setText(getFallbackText(cityValue, "No City Selected"));


    }
    private String getFallbackText(String input, String fallback) {
        return input != null && !input.isEmpty() ? input : fallback;
    }
}