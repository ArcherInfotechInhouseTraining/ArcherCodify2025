import java.util.*;
class DemoWhilePrimeCount
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);

		System.out.println("\n Enter the range starts from: ");
		int n1=sc.nextInt();
		System.out.println("\n Enter the range ends to: ");
		int n2=sc.nextInt();

		int d=2,flg=0;
		System.out.println("\n List of prime nos: ");
		for(int no=n1;no<=n2;no++)
		{
			d=2;
			flg=0;
			while(d<=(no/2))
			{
				if(no%d==0)
				{
					flg=1;
					break;
				}
				d++;
			}
			if(flg==0)
				System.out.println("  "+no);
		}
	}
}
