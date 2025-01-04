package Codes;

import java.io.InputStreamReader;
import java.io.BufferedReader;

public class IOUsingBI {
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try {
            int x;
            System.out.println("\nEnter integer : ");
            x = Integer.parseInt(br.readLine());
            System.out.println("integer --> " + x);

            float f;
            System.out.println("\nEnter float : ");
            f = Float.parseFloat(br.readLine());
            System.out.println("float --> " + f);

        } catch (Exception e) {
        }
    }
}
