package com.example.splashscreen;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class activity_login_page extends AppCompatActivity {


    Button loginBtn;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_login_page);

        loginBtn = findViewById(R.id.btn);
        loginBtn.setOnClickListener(new View.OnClickListener() {

            public void onClick(View v) {

                Toast.makeText(activity_login_page.this, "Login button clicked", Toast.LENGTH_SHORT).show();

                Intent intent = new Intent(activity_login_page.this, login_suf.class);
                startActivity(intent);
                finish();
            }
        });
    }
}

