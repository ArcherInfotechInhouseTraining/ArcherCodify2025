import java.util.*;
class SelectionSort
{
	public static void main(String args[])
	{
	Scanner sc=new Scanner(System.in);
	int x[]=new int[5];
	int i,j,tmp;
	System.out.println("\n Enter any 5 nos: ");
	for(i=0;i<x.length;i++)
	{
		x[i]=sc.nextInt();	
	}

	System.out.println("\n Before Sort: ");
	for(i=0;i<x.length;i++)
	{
		System.out.print(" "+x[i]);
	}

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(x[i]>x[j])
			{
				tmp=x[i];
				x[i]=x[j];
				x[j]=tmp;
			}
		}
	}

	System.out.println("\n After Sort: ");
	for(int val:x)
	{
		System.out.println(" "+val);
	}
}
}