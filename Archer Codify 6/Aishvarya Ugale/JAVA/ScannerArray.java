import java.util.Scanner;
class ScannerArray
{
  public static void main(String args[])
   {
    int arr[]=new int[5];
  
   Scanner sc=new Scanner(System.in);
   System.out.println("Enter Array Elements");
   for(int i=0;i<arr.length;i++)
     {
          arr[i]=sc.nextInt();
      }
   System.out.println("Array Elements is:");
   for(int i=0;i<arr.length;i++)
     {
           System.out.println(arr[i]);
      }
        sc.close();
   }
}