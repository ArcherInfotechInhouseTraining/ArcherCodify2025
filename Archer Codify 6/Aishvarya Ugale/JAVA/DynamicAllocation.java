import java.util.Scanner;
class DynamicAllocation
{

public static void main(String args[])
{
    Scanner sc =new Scanner(System.in);
    int cnt;
    System.out.println("Enter How many Elements You want :");
    cnt=sc.nextInt();
    int arr[]=new int[cnt];

   System.out.println("Enter"+cnt+"elements:");
   for(int i=0;i<cnt;i++)
     {
       arr[i]=sc.nextInt();
      }
    System.out.println("Display"+cnt+"elements is:");
   for(int t : arr)
      {
          System.out.println(" "+t);
       }
}
}