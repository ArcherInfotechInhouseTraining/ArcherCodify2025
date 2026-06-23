import java.util.*;
class InsertionSort
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the count:");
		int cnt=sc.nextInt();
		int x[]=new int[cnt];
		int i,j,tmp;
		System.out.println("\n Enter any 5 nos: ");
	for(i=0;i<x.length;i++)
	{
		x[i]=sc.nextInt();
	}

	System.out.println("\n Before Sort: ");
	for(int val:x)
	{
		System.out.print(" "+val);
	}

	 
	for(i=1;i<cnt;i++) // i gives pivot position
	{
		int pivot=x[i];
		j=i-1;
		while( j!=-1 && x[j]>pivot)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=pivot;
		
	}

	System.out.println("\n After Sort: ");
	for(int val:x)
	{
		System.out.print(" "+val);
	}


   }
}
