package Codes;

import java.util.Scanner;

public class DemoSwitchStr {
    public static void main(String[] args) {
        int no1, no2;
        String opt;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter Any Two Numbers: ");
            no1 = sc.nextInt();
            no2 = sc.nextInt();
            sc.nextLine(); // Consume the leftover newline

            System.out.println("\n<--------- MENU --------->\n");
            System.out.println("add. Addition");
            System.out.println("sub. Subtraction");
            System.out.println("mul. Multiplication");
            System.out.println("div. Division");

            System.out.println("\nEnter Choice: ");
            opt = sc.nextLine();
        }

        switch (opt) {
            case "add":
                System.out.println("Addition: " + (no1 + no2));
                break;
            case "sub":
                System.out.println("Subtraction: " + (no1 - no2));
                break;
            case "mul":
                System.out.println("Multiplication: " + (no1 * no2));
                break;
            case "div":
                if (no2 != 0) {
                    System.out.println("Division: " + ((double) no1 / no2));
                } else {
                    System.out.println("Error: Division by zero");
                }
                break;
            default:
                System.out.println("Invalid Option");
        }
    }
}
