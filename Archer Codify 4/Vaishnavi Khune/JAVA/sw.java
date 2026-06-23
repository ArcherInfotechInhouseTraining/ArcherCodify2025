import java.util.*;

public class sw{

public static void main(String args[])throws Exception{ 

Scanner obj=new Scanner(System.in);
/*System.out.println("Enter number for operation:");
int a=obj.nextInt();
int b=obj.nextInt();*/

do{
System.out.println("Enter number for operation:");
int a=obj.nextInt();
int b=obj.nextInt();
System.out.println("Enter the operation:(+,-,*,/,e for exit)");
char op=obj.next().charAt(0);
 
switch(op){

 case '+':
System.out.println("Addition is :"+(a+b));
break;

case '-':
System.out.println("Subtraction is :"+(a-b));
break;

case '*':
System.out.println("Multiplication  is :"+(a*b));
break;

case '/':
System.out.println("Division is :"+(a/b));
break;

case 'e':
System.exit(0);
break;

default:
System.out.println("Invalid operation");


}
}while(true);
}

}