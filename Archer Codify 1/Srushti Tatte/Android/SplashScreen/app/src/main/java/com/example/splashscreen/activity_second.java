package com.example.splashscreen;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

public class activity_second extends AppCompatActivity {
    TextView swipeTv;
    GestureDetector gestureDetector;

    @SuppressLint("ClickableViewAccessibility")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);

        swipeTv = findViewById(R.id.textView2);

        // Initialize GestureDetector
        gestureDetector = new GestureDetector(this, new GestureDetector.SimpleOnGestureListener() {
            @Override
            public boolean onDown(@NonNull MotionEvent e) {
                Toast.makeText(activity_second.this, "onDown Called", Toast.LENGTH_SHORT).show();
                return true;
            }

            @Override
            public boolean onSingleTapUp(@NonNull MotionEvent e) {
                Toast.makeText(activity_second.this, "Single Tap Detected", Toast.LENGTH_SHORT).show();
                return true;
            }

            @Override
            public void onLongPress(@NonNull MotionEvent e) {
                Toast.makeText(activity_second.this, "Long Press Detected", Toast.LENGTH_SHORT).show();
            }

            @Override
            public boolean onFling(@NonNull MotionEvent e1, @NonNull MotionEvent e2, float velocityX, float velocityY) {
                Toast.makeText(activity_second.this, "Fling Detected", Toast.LENGTH_SHORT).show();
                return true;
            }
        });
        swipeTv.setOnTouchListener((view, motionEvent) -> gestureDetector.onTouchEvent(motionEvent));
    }

}
