import java.util.*;
class BinarySearch
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


	System.out.println("\n Enter the number to be searched: ");
	int num=sc.nextInt();
	int flg=0;
	int start=0;
	int mid;
	int end=cnt-1;
	do
	{
		mid=(start+end)/2;
		if(x[mid]==num)
		{
			flg=1;
			break;
		}
		else if(num<x[mid])
		{
			end=mid-1;
		}
		else if(num>x[mid])
		{
			start=mid+1;
		}
	}while(start<=end);

	if(flg==0)
	{
		System.out.println(num+" is not present in an Array");
	}
	else
	{
		System.out.println(num+" is present at "+ mid +" position");
	}
}
}
