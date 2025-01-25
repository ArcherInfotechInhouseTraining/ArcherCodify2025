import java.util.*;
class PrimeNumbers
{
	public static void main(String args[])
	{
	Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the count:");
		int cnt=sc.nextInt();
		int x[]=new int[cnt];
		int i,j,tmp,no;
		System.out.println("\n Enter any "+cnt+" nos: ");
		for(i=0;i<x.length;i++)
		{
			x[i]=sc.nextInt();
		}
        
	System.out.println("\n Prime List: ");
	for(i=0;i<x.length;i++)
	{
		int d=2;
		int flg=0;
		while(d<=(x[i]/2))
		{
			if(x[i]%d==0)
			{
				flg=1;
				break;
			}
			d++;
		}
		if(flg==0)
		{
			System.out.println(" "+x[i]);
		}
	}
 }
}
