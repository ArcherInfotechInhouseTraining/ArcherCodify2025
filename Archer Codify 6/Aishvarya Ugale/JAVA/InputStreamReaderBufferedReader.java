import java.io.*;
class InputStreamReaderBufferedReader
{
    public static void main(String args[])throws Exception
        {
           int arr[]=new int[5];
           BufferedReader br=new BufferedReader(new InputStreamReader (System.in));
         System.out.println("Enter Array Elements");
           for(int i=0;i<arr.length;i++)
              {
                arr[i]=Integer.parseInt(br.readLine());
              }
           System.out.println("Array Elements are:");
            for(int i=0;i<arr.length;i++)
              {
                System.out.println(arr[i]);
              } 
         }
}