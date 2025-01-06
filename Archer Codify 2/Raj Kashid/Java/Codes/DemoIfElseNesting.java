package Codes;

import java.util.Scanner;

public class DemoIfElseNesting {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int x, y, z;
            System.out.println("Enter three numbers : ");
            x = sc.nextInt();
            y = sc.nextInt();
            z = sc.nextInt();

            if (x > y) {
                if (x > z) {
                    System.out.println(x + " is largest");
                } else {
                    System.out.println(z + " is largest");
                }
            } else {
                if (y > z) {
                    System.out.println(y + " is largest");
                } else {
                    System.out.println(z + " is largest");
                }
            }
        }
    }
}
