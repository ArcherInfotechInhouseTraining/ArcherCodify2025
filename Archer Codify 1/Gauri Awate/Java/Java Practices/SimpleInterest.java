// program to calc the simple interst.
import java.util.*;
class SimpleInterest
{
   	public static void main(String args[])
	{	
		Scanner sc=new Scanner(System.in);
		int p=0,n=0;
		double si=0.0,r=0.0;
		System.out.println("\nEnter the principle:");
		p=sc.nextInt();
		System.out.println("\nEnter the time:");
		n=sc.nextInt();
	        System.out.println("\nEnter the rate:");
		r=sc.nextDouble();
		si=p*r*n/100;
		System.out.println("\nSimple Interest is:"+si);
		
		

		

           
	}
}