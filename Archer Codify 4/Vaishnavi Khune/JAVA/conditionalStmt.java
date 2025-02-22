import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;

class conditionalStmt
{

public static void main(String []args) throws Exception
{
/* InputStreamReader isr = new InputStreamReader(System.in);
BufferedReader br = new BufferedReader(isr);
 
System.out.println("Enter a number:");
int n =Integer.parseInt(br.readLine());

if(n%7==0)
{
System.out.println(n+" is divisible by 7");
}
else
{
System.out.println(n+" is not divisible by 7");

}

int a=Integer.parseInt(args[0]);

int b=Integer.parseInt(args[1]);

int c=Integer.parseInt(args[2]);

if(a>b)
{
 if(a>c)
{
System.out.println(a+"is the max number");
}
}else
{
if(b>c)
{
System.out.println(b+"is the max number");
}else
{System.out.println(c+"is the max number");}
} */
 
Scanner sc = new Scanner(System.in);

int x,y;

System.out.println("Enter x and y Co-ordinates:");
x=sc.nextInt();
y=sc.nextInt();

if(x>0 && y>0){
System.out.println("Point is in 1st Quadrant");
}else if(x<0 && y>0){
System.out.println("Point is in 2nd Quadrant");
}else if(x>0 && y<0){
System.out.println("Point is in 4th Quadrant");
}else if(x<0 && y<0){
System.out.println("Point is in 3rd Quadrant");
}else if(x==0 && y!=0){
System.out.println("Point is on Y-axis");
}else if(x!=0 && y==0){
System.out.println("Point is on X-axis");
}
else if(x==0 && y==0){
System.out.println("Point is at Origin");
}

}

}