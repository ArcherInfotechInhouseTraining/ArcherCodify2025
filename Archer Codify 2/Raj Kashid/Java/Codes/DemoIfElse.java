package Codes;

import java.util.Scanner;

public class DemoIfElse {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int x;
            System.out.println("Enter value for x : ");
            x = sc.nextInt();

            if (x % 2 == 0) {
                System.out.println("x is divided by 2");
            } else {
                System.out.println("x is not divided by 2");
            }
        }
    }
}
