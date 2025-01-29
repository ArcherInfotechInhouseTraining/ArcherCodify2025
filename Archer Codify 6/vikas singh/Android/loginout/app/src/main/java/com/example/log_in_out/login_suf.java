package com.example.log_in_out;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.os.Bundle;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class login_suf extends AppCompatActivity {

    private GestureDetector gestureDetector;
    private Button navigateButton; // Button for navigation

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_login_suf);

        // Initialize the button
        navigateButton = findViewById(R.id.but1);

        // Set up the GestureDetector for handling gestures
        gestureDetector = new GestureDetector(this, new GestureDetector.OnGestureListener() {
            @Override
            public boolean onDown(@NonNull MotionEvent e) {
                showToast("Gesture detected: onDown");
                return true;
            }

            @Override
            public void onShowPress(@NonNull MotionEvent e) {
                showToast("Gesture detected: onShowPress");
            }

            @Override
            public boolean onSingleTapUp(@NonNull MotionEvent e) {
                showToast("Gesture detected: onSingleTapUp");
                return true;
            }

            @Override
            public boolean onScroll(@Nullable MotionEvent e1, @NonNull MotionEvent e2, float distanceX, float distanceY) {
                showToast("Gesture detected: onScroll");
                return true;
            }

            @Override
            public void onLongPress(@NonNull MotionEvent e) {
                showToast("Gesture detected: onLongPress");
            }

            @Override
            public boolean onFling(@Nullable MotionEvent e1, @NonNull MotionEvent e2, float velocityX, float velocityY) {
                showToast("Gesture detected: onFling");
                return true;
            }
        });

        // Set the button click listener for navigation
        navigateButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                navigateToLogin(); // Navigate to the login page
            }
        });
    }

    // Handle touch events and delegate them to the GestureDetector
    @Override
    public boolean onTouchEvent(MotionEvent event) {
        if (gestureDetector != null) {
            gestureDetector.onTouchEvent(event);
        }
        return super.onTouchEvent(event);
    }

    // Navigate to the login page
    private void navigateToLogin() {
        startActivity(new Intent(login_suf.this, login.class));
        finish();
    }

    // Show toast messages for gestures
    private void showToast(String message) {
        Toast.makeText(login_suf.this, message, Toast.LENGTH_SHORT).show();
    }
}
