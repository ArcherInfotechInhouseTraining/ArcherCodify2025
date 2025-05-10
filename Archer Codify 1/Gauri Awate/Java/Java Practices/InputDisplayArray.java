import java.io.*;
class InputDisplayArray
{
  	public static void main(String args[]) throws Exception
	{
	      InputStreamReader isr=new InputStreamReader(System.in);
	      BufferedReader br=new BufferedReader(isr);	
              int arr[]=new int[6];
	      System.out.println("\nEnter the array elements:");
	      for(int i=0;i<arr.length;i++)
	     {


                arr[i]=Integer.parseInt(br.readLine());
	     }
	      System.out.println("\nArray elements are:");

             for(int val:arr)
	     {
               System.out.print(" "+val);
	     }
	}




}