// 3. Write a JAVA program to input any alphabet and check whether it is vowel or consonant.

import java.util.Scanner;

class Vowel
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);
String input;
char c;

System.out.println("Enter one Alphabet:");
input=sc.next();
c=input.charAt(0);

if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U')
{
System.out.println("It is Vowel");
}else {

System.out.println("It is consonant. ");

}

}
}