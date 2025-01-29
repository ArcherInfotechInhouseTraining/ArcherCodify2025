package com.example.log_in_out;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;

public class login extends AppCompatActivity {

    EditText emailInput, passwordInput;
    Button loginBtn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_login);

        emailInput = findViewById(R.id.Email);
        passwordInput = findViewById(R.id.Password);
        loginBtn = findViewById(R.id.btn);


        loginBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String email = emailInput.getText().toString().trim();
                String password = passwordInput.getText().toString().trim();


                if (email.equals("vikas91@gmail.com") && password.equals("vikas91")) {

                    Toast.makeText(login.this, "Login Successful!", Toast.LENGTH_SHORT).show();

                    Intent intent = new Intent(login.this, login_suf.class);
                    startActivity(intent);
                    finish();
                } else {
                    Toast.makeText(login.this, "Invalid email or password.", Toast.LENGTH_SHORT).show();
                }
            }
        });
    }
}
