class Init2dArray
{
public static void main(String args[])
{


int arr[][]={ {12,34,45,56}, {11,22,33,44}, {10,20,30,40} };

System.out.println("Array Elements are");

for(int i=0;i<arr.length;i++)
{
   for(int j=0;j<arr[i].length;j++)
     {
        System.out.print(" "+arr[i][j]);
      }
  System.out.println();
}
}
}