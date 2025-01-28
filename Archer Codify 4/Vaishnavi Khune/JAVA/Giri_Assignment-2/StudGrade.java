/* 6. Write a JAVA program to input marks in five subjects Physics, Chemistry, Biology, Mathematics, and Computer. Calculate the percentage and grade according to the following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

import java.util.Scanner;

class StudGrade
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);

int p,c,b,m,comp;
float per;

System.out.println("Enter the Physics Marks:");
p=sc.nextInt();

System.out.println("Enter the Chemistry Marks:");
c=sc.nextInt();

System.out.println("Enter the Biology Marks:");
b=sc.nextInt();

System.out.println("Enter the Mathematics Marks:");
m=sc.nextInt();

System.out.println("Enter the Computer Marks:");
comp=sc.nextInt();

int total = (p+c+b+m+comp);

per=((float)total/500)*100;

System.out.println("Your percentage is:"+per);

if(per>=90)
{
System.out.println("Your Grade : A");

}else if(per<90 && per>=80)
{
System.out.println("Your Grade : B");

}else if(per>=70 && per<80)
{
System.out.println("Your Grade : C");

}else if(per>=60 && per<70)
{
System.out.println("Your Grade : D");

}else if(per>=40 && per<60)
{
System.out.println("Your Grade : E");

}else if(per<40)
{
System.out.println("Your Grade : F");

}





}
}