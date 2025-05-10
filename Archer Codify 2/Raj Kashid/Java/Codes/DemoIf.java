package Codes;

import java.util.Scanner;

public class DemoIf {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int x = 0;
            System.out.println("Enter Value For X : ");
            x = sc.nextInt();

            if (x % 2 == 0) {
                System.out.println("X is divided by 2");
            }
            if (x % 2 != 0) {
                System.out.println("X is not divided by 2");
            }
        }
    }
}
