package Codes;

import java.util.Scanner;

public class DemoIfElseLadder {
    public static void main(String[] args) {
        int x = 0, y = 0;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter (x, y) co-prdinate : ");
            x = sc.nextInt();
            y = sc.nextInt();
        }

        if (x > 0 && y > 0) {
            System.out.println("Ist Quadrant");
        } else if (x < 0 && y > 0) {
            System.out.println("IInd Quadrant");
        } else if (x < 0 && y < 0) {
            System.out.println("IIIrd Quadrant");
        } else if (x > 0 && y < 0) {
            System.out.println("IVth Quadrant");
        } else if (x != 0 && y == 0) {
            System.out.println("X-Axis");
        } else if (x == 0 && y != 0) {
            System.out.println("Y-Axis");
        } else {
            System.out.println("Origin");
        }
    }
}
