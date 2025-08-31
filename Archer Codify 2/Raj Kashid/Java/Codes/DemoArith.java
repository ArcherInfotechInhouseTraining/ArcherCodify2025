package Codes;

import java.io.InputStreamReader;
import java.io.BufferedReader;

public class DemoArith {
    public static void main(String[] args) {
        int p, n;
        double r = 0.0, si = 0.0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {

            System.out.println("Enter p : ");
            p = Integer.parseInt(br.readLine());
            System.out.println("Enter r : ");
            r = Double.parseDouble(br.readLine());
            System.out.println("Enter n : ");
            n = Integer.parseInt(br.readLine());

            si = (p * r * n) / 100;
            System.out.println("Simple Interest : " + si);
        } catch (Exception e) {
        }

    }
}
