// 6. Write a program to check entered number is an Automorphic Number or not.


import java.util.Scanner;

class AutomorphicNum
{

    static boolean isAutomorphic(int num)
    {
       int square=num*num;
       while(num>0)
       {
        if(num%10 != square%10)
        return false;

        num/=10;
        square/=10;
       }
       return true;
    }
   public static void main(String args[])
  {

   Scanner sc = new Scanner(System.in);

      System.out.println("Enter a number:");
    int n = sc.nextInt();

    System.out.println(isAutomorphic(n)?"Automorphic":"Not Automorphic");

   }
}

