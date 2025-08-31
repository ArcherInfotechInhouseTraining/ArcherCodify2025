	/*-Tranpose
	- unit matrix
	- upper triangular
	- lower triangular
	- diagonal*/
//WAP to print the transpose of matrix
import java.util.*;
class TransposeMatrix
{
	public static void main(String args[])
	{
	 Scanner sc=new Scanner(System.in);
   	 int R,C,i,j
   	 System.out.println("\nEnter the number of rows:");
    	R=sc.nextInt();
    	 System.out.println("\nEnter the number of columns:");
    	C=sc.nextInt();
    	int arr[][]=new int[R][C];
    	System.out.println("\nEnter the matrix:");
    	for(i=0;i<R;i++)
	{
        	for(j=0;j<C;j++)
		{
            		arr[i][j]=sc.nextInt();
        	}
    	}
    	System.out.println("\nMatrix is: \n");
 	for(i=0;i<R;i++)
	{
        	for(j=0;j<C;j++)
		{
           	 System.out.print(" "+arr[i][j]);

        	}
        System.out.println();
    	}
   	System.out.println("\nTranspose is: \n");
    	for(i=0;i<R;i++)
	{
        	for(j=0;j<C;j++)
		{
                 	System.out.print(" "+arr[j][i]);


        	}

       	System.out.println();
    	}


    }
}

