import java.util.Scanner;
class UserINPUTInit2dArray
{

public static void main(String args[])
{
 Scanner sc=new Scanner(System.in);
 int arr[][]=new int[3][4];

System.out.println("Enter Array Elements:");

for(int i=0;i<3;i++)
{
 for(int j=0;j<4;j++)
   {
       arr[i][j]=sc.nextInt();
    }
}

System.out.println("Array Elemnts Are :");

for(int i=0;i<3;i++)
{
 for(int j=0;j<4;j++)
   {
     System.out.print(" "+arr[i][j]);
    }
System.out.println();
}
}
}