package com.example.register;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.widget.Button;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class Implicit_intent extends AppCompatActivity {

    Button webBtn,  webBtn2,  webBtn3,  webBtn4;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_implicit_intent);

        webBtn = findViewById(R.id.btn1);
        webBtn2 = findViewById(R.id.btn2);
        webBtn3 = findViewById(R.id.btn3);
        webBtn4 = findViewById(R.id.btn4);




        webBtn.setOnClickListener(view -> {
            Intent intent= new Intent(Intent.ACTION_VIEW);
            intent.setData(Uri.parse("www.google.com"));
            startActivity(intent);

        });

        webBtn2.setOnClickListener(view -> {
            Intent intent= new Intent(Intent.ACTION_SEND);
            intent.setType("text/plain");
            intent.putExtra(Intent.EXTRA_TEXT, "Hello I am Aishvarya");
            startActivity(Intent.createChooser(intent, "Share via"));

        });

        webBtn3.setOnClickListener(view -> {
            Intent intent = new Intent(Intent.ACTION_DIAL);
            intent.setData(Uri.parse("tel: 7219413318"));
            startActivity(intent);
        });
        webBtn4.setOnClickListener(view -> {
            Intent intent = new Intent(Intent.ACTION_VIEW);
            intent.setData(Uri.parse("https://maps.app.goo.gl/R5aNcUUuQwmYMVoZ7"));
            startActivity(intent);
        });
    }
}