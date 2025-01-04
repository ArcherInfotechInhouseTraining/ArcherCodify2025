package Codes;

import java.util.Scanner;

public class DemoDivMod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int no = 0, rem = 0, tot = 0;

        System.out.println("Enter 3 Digit Number : ");
        no = sc.nextInt();

        rem = no % 10;
        tot += rem;
        no /= 10;
        rem = no % 10;
        tot += rem;
        no /= 10;
        rem = no % 10;
        tot += rem;
        no /= 10;
        System.out.println("Sum of 3 Digit Number : " + tot);
        sc.close();
    }
}
