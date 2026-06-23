// 4. Write a JAVA program to input any character and check whether it is an alphabet, digit, or special character.


import java.util.Scanner;

class CharacterID
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);
String input;
char c;

System.out.println("Enter one Alphabet:");
input=sc.next();
c=input.charAt(0);

if((c>='A' && c<='Z')|| (c>='a' && c<='z'))
{
System.out.println("It is Alphabet");
}else if(c>='0' || c<'0') {

System.out.println("It is Digit. ");

}else
{
System.out.println("It is Special character. ");


}


}
}