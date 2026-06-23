//WAP to print the Lower Triangular matrix
import java.util.*;
class LowerTriangularMatrix
{
	public static void main(String args[])
	{
	 Scanner sc=new Scanner(System.in);
   	 int ROW,COL,i,j;
   	 System.out.println("\nEnter the number of rows:");
    	ROW=sc.nextInt();
    	 System.out.println("\nEnter the number of columns:");
    	COL=sc.nextInt();
    	int arr[][]=new int[ROW][COL];
    	System.out.println("\nEnter the matrix:");
    	for(i=0;i<ROW;i++)
	{
        	for(j=0;j<COL;j++)
		{
            		arr[i][j]=sc.nextInt();
        	}
    	}
    	System.out.println("\nMatrix is: \n");
 	for(i=0;i<ROW;i++)
	{
        	for(j=0;j<COL;j++)
		{
           	 System.out.print(" "+arr[i][j]);

        	}
        System.out.println();
    	}

System.out.println("\nLower triangular matrix is: \n");
for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
		    if(i>=j)
		   {
			System.out.print(" "+arr[i][j]);
		    }
		    else
		    {
                	System.out.print(" "+0);
		    }
		}
		System.out.println();
	}
}
}