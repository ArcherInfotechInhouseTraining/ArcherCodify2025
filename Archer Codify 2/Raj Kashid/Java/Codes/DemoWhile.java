package Codes;

import java.util.Scanner;

public class DemoWhile {
    public static void main(String[] args) {
        // Display 1 to 15 Numbers
        // int i = 0;
        // while (i++ <= 15) {
        // System.out.print(i + " ");
        // }

        // Display odd numbers from 1 to 50
        // int i = 1;
        // while (i <= 50) {
        // if (i % 2 != 0) {
        // System.out.print(i + " ");
        // }
        // i++;
        // }

        // Check Enter number is prime or not
        // int no = 0;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter number : ");
        // no = sc.nextInt();
        // boolean flg = true;
        // int d = 2;
        // while (d <= (no / 2)) {
        // if (no % d == 0) {
        // flg = false;
        // break;
        // }
        // d++;
        // }
        // if (flg) {
        // System.out.println("Number is prime");
        // } else {
        // System.out.println("Number is not prime");
        // }

        // Check Prime Within Some Range
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int s, e, d;
        boolean flg;
        System.out.println("Enter Starting Point : ");
        s = sc.nextInt();
        System.out.println("Enter Ending Point : ");
        e = sc.nextInt();

        for (int no = s; no <= e; no++) {
            d = 2;
            flg = true;
            while (d <= (no / 2)) {
                if (no % d == 0) {
                    flg = false;
                    break;
                }
                d++;
            }
            if (flg) {
                System.out.print(no + " ");
            }
        }
    }
}
