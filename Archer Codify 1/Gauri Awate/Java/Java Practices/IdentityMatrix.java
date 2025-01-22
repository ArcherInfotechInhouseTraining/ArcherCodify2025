//WAP to print the Identity matrix
import java.util.*;
class IdentityMatrix
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

	int flag=0;
	for(i=0;i<ROW;i++)
	{
	    flag=0;
		for(j=0;j<COL;j++)
		{
		    if(i==j && arr[i][j]==1){
                    flag=1;

		    }

		}
		System.out.print("\n");
	}
	if(flag==1)
	{
     	 System.out.println("\nMatrix is identity matrix");
	}
	else
	{
                System.out.println("\nMatrix is not identity matrix");
	 }
}
}
