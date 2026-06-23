// Enter any 3 digit number from keyboard and find addition of its all digits.
  // no=285 then ans = 5+8+2 => 15
import java.util.*;
class AddDigit
{
   	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int no;
		System.out.println("\nEnter any number:");
		no=sc.nextInt();
		int sum=0;
		for(;no!=0;no=no/10)
		{
			int rem=no%10;
			sum=sum+rem;
		}

		System.out.println("\nSum of digit is:"+sum);

	}




}