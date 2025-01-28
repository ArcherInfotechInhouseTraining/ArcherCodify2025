// 5. Write a JAVA program to check whether a character is uppercase or lowercase alphabet.

import java.util.Scanner;

class UppLow
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);
String input;
char c;

System.out.println("Enter one Alphabet:");
input=sc.next();
c=input.charAt(0);

if(c>='A' && c<='Z')
{
System.out.println("It is Uppercase alphabet.");
}else if(c>='a' && c<='z'){

System.out.println("It is Lowercase alphabet.");

}else{
System.out.println("It is not Alphabet.");


}

}
}