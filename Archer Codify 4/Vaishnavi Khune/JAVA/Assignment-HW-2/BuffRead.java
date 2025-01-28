// 2. Write a program using BufferedReader and InputStreamReader to input and display the 
// elements of different types and explain them.

import java.io.InputStreamReader;
import java.io.BufferedReader;

class BuffRead
{

public static void main(String args[]) throws Exception
{

InputStreamReader isr = new InputStreamReader(System.in);
BufferedReader br = new BufferedReader(isr);

System.out.println("Enter int value:");
int i =Integer.parseInt(br.readLine());

System.out.println("Enter float value:");
float f =Float.parseFloat(br.readLine());

System.out.println("Enter double value:");
double d =Double.parseDouble(br.readLine());

System.out.println("Enter char value:");
String x =br.readLine();
char ch=x.charAt(0);

System.out.println("Enter string value:");
String s =br.readLine();

System.out.println("int:"+i);
System.out.println("Float:"+f);
System.out.println("Double:"+d);
System.out.println("Char:"+ch);
System.out.println("String:"+s);

}

}