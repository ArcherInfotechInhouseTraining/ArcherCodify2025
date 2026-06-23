// 3. Write a JAVA program to check whether an alphabet is vowel or consonant using switch case.

import java.util.Scanner;

class Alphabets
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
String a;
char c;

System.out.println("Enter an alphabet:");
c=sc.next().charAt(0);

switch(c)
{

case('a'):
case('e'):
case('i'):
case('o'):
case('u'):
case('A'):
case('E'):
case('I'):
case('O'):
case('U'):

System.out.println("It is a Vowel");
break;

default:
System.out.println("It is a Consonent");
break;


}


}
}
