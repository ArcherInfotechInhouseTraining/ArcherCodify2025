package Codes;

import java.util.Scanner;

public class DemoSwitch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        int no1, no2, opt;
//        System.out.println("Enter Any Two Number : ");
//        no1 = sc.nextInt();
//        no2 = sc.nextInt();
//
//        System.out.println("\n<--------- MENU --------->\n");
//        System.out.println("1. Addition");
//        System.out.println("2. Subtraction");
//        System.out.println("3. Multiplication");
//        System.out.println("4. Division");
//
//        System.out.println("Enter Choice : ");
//        opt = sc.nextInt();
//
//        switch (opt) {
//            case 1:
//                System.out.println("Addition : " + (no1 + no2));
//                break;
//            case 2:
//                System.out.println("Subtraction : " + (no1 - no2));
//                break;
//            case 3:
//                System.out.println("Multiplication : " + (no1 * no2));
//                break;
//            case 4:
//                System.out.println("Division : " + (no1 / no2));
//                break;
//            default:
//                System.out.println("Invalid Option");
//        }


        int no1, no2;
        char opt;

        System.out.println("Enter Any Two Numbers: ");
        no1 = sc.nextInt();
        no2 = sc.nextInt();
        sc.nextLine(); // Consume the leftover newline

        System.out.println("\n<--------- MENU --------->\n");
        System.out.println("a. Addition");
        System.out.println("b. Subtraction");
        System.out.println("c. Multiplication");
        System.out.println("d. Division");

        System.out.println("Enter Choice: ");
        opt = sc.nextLine().charAt(0);

        switch (opt) {
            case 'A':
            case 'a':
                System.out.println("Addition: " + (no1 + no2));
                break;
            case 'B':
            case 'b':
                System.out.println("Subtraction: " + (no1 - no2));
                break;
            case 'C':
            case 'c':
                System.out.println("Multiplication: " + (no1 * no2));
                break;
            case 'D':
            case 'd':
                if (no2 != 0) {
                    System.out.println("Division: " + ((double) no1 / no2));
                } else {
                    System.out.println("Error: Division by zero");
                }
                break;
            default:
                System.out.println("Invalid Option");
        }

//        We Can Use Break And Exit(0) For Termination
    }
}
