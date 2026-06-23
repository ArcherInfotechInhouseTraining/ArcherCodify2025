import java.util.Scanner;
class DemoCharArray
{
public static void main(String args[])
{

char ch [];
Scanner sc=new Scanner(System.in);
System.out.println("Enter any string:");
String str=sc.nextLine();


System.out.println("Entered String is:"+str);

ch=str.toCharArray();

System.out.println("Charcter Array is:");
for(char t : ch)
{

System.out.print(t+",");
}
}
}