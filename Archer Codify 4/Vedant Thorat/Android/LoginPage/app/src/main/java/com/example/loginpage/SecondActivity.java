package com.example.loginpage;

import android.os.Bundle;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class SecondActivity extends AppCompatActivity {

    TextView swipeTv;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_second);

         swipeTv = findViewById(R.id.textView2);

        GestureDetector gestureDetector = new GestureDetector(this, new GestureDetector.OnGestureListener() {
            @Override
            public boolean onDown(@NonNull MotionEvent e) {
                Toast.makeText(SecondActivity.this, "onDwon Called", Toast.LENGTH_SHORT).show();

                return true;
            }

            @Override
            public void onShowPress(@NonNull MotionEvent e) {
                Toast.makeText(SecondActivity.this, "NoNull Called", Toast.LENGTH_SHORT).show();


            }

            @Override
            public boolean onSingleTapUp(@NonNull MotionEvent e) {
                Toast.makeText(SecondActivity.this, "onSingleTapup Called", Toast.LENGTH_SHORT).show();

                return true;
            }

            @Override
            public boolean onScroll(@Nullable MotionEvent e1, @NonNull MotionEvent e2, float distanceX, float distanceY) {
                Toast.makeText(SecondActivity.this, "onScroll Called", Toast.LENGTH_SHORT).show();

                return true;
            }

            @Override
            public void onLongPress(@NonNull MotionEvent e) {
                Toast.makeText(SecondActivity.this, "onLongPress Called", Toast.LENGTH_SHORT).show();


            }

            @Override
            public boolean onFling(@Nullable MotionEvent e1, @NonNull MotionEvent e2, float velocityX, float velocityY) {
                Toast.makeText(SecondActivity.this, "onFling Called", Toast.LENGTH_SHORT).show();
                return true;
            }
        });

        swipeTv.setOnTouchListener(((v,event) -> gestureDetector.onTouchEvent(event)));
    }
}