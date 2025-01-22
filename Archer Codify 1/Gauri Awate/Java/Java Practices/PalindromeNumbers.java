import java.util.*;
class PalindromeNumbers
{
	public static void main(String args[])
	{
	Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the count:");
		int cnt=sc.nextInt();
		int x[]=new int[cnt];
		int i,j,tmp,no;
		System.out.println("\n Enter any 5 nos: ");
	for(i=0;i<x.length;i++)
	{
		x[i]=sc.nextInt();
	}
        int pcnt=0;
	for(i=0;i<cnt;i++)
	{
		no=x[i];
		int rev=0;
		while(no!=0)
		{
			rev=(rev*10)+(no%10);
			no=no/10;
		}
		if(rev==x[i])
		{
			pcnt++;
		}
	}

	System.out.println("\n Array Elements: ");
	for(int val:x)
	{
		System.out.println(" "+val);	
	}
	System.out.println("\n Palindrome Count: "+pcnt);
	}
}
