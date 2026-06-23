// 7. Write a program to calculate the HCF(GCD) of two numbers

import java.util.Scanner;

class HCF {
    public static void main(String []args) {

Scanner sc = new Scanner(System.in);

System.out.println("Enter two numbers:");
int n1=sc.nextInt();
int n2=sc.nextInt();
       
        // Initially set to gcd
        int gcd = 1;

        for (int i = 1; i <= n1 && i <= n2; ++i) {
            // Check if i perfectly divides both n1 and n2
            if (n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }

        System.out.println("GCD of " + n1 + " and " + n2 + " is " + gcd);
    }
}z