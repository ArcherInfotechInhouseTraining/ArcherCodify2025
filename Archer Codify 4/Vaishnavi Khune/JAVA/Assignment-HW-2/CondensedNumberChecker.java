// 8. Write a program to check entered number is Condense Number or not

import java.util.Scanner;

public class CondensedNumberChecker {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        if (isCondensedNumber(number)) {
            System.out.println(number + " is a condensed number.");
        } else {
            System.out.println(number + " is not a condensed number.");
        }

        scanner.close();
    }

    // Function to check if a number is a condensed number
    public static boolean isCondensedNumber(int number) {
        String str = Integer.toString(number);

        // Check if the length of the string representation of the number is 1
        if (str.length() == 1) {
            return true;
        }

        // Check if the difference between adjacent digits is always 1
        for (int i = 0; i < str.length() - 1; i++) {
            int diff = Math.abs(str.charAt(i) - str.charAt(i + 1));
            if (diff != 1) {
                return false;
            }
        }

        return true;
    }
}
