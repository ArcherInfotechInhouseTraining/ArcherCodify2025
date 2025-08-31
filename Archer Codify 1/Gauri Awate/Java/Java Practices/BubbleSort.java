import java.util.*;
class BubbleSort
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
	for(i=0;i<x.length;i++)
	{
		System.out.println(" "+x[i]);
	}

	
	for(i=0;i<cnt-1;i++)
	{
		for(j=0;j<(cnt-1-i);j++)
		{
			if(x[j]>x[j+1])
			{
				tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
				
			}
		}
	}
	System.out.println("\n After Sort: ");
	for(i=0;i<x.length;i++)
	{
		System.out.println(" "+x[i]);
	}

	}
}
