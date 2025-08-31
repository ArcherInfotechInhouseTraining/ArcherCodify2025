/*
import java.util.Scanner;
class DemoSwitch
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		int opt=0;
		double a=0.0, b=0.0, ans=0.0;
                while(true)
		{
		System.out.println("\n*** Menu ****");
		System.out.println("1.add \n 2.sub \n 3.multi \n 4.div ");
		System.out.println("select your option: ");
		opt=sc.nextInt();

		System.out.println("Enter any two nos: ");
		a=sc.nextDouble();
		b=sc.nextDouble();
		
		switch(opt)
		{
			case 1:
				ans=a+b;
				break;
			case 2:
				ans=a-b;
				break;
			case 3:
				ans=a*b;
				break;
			case 4:
				ans=a/b;
				break;
			default:
				System.out.println("\n Incorrect Option");			
		}	
		System.out.println("\n Ans is: "+ans);					
	}
  }
}


	// Using the character as a option (both lcase and ucase for a single case)

import java.util.Scanner;
class DemoSwitch
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		char opt=0;
		double a=0.0, b=0.0, ans=0.0;

		System.out.println("\n*** Menu ****");
		System.out.println(" a.add \n b.sub \n c.multi \n d.div ");
		System.out.println("select your option: ");
		opt=sc.nextLine().charAt(0);

		System.out.println("Enter any two nos: ");
		a=sc.nextDouble();
		b=sc.nextDouble();
		
		switch(opt)
		{
			case 'A':
			case 'a':
				ans=a+b;
				break;
			case 'B':
			case 'b':
				ans=a-b;
				break;
			case 'C':
			case 'c':
				ans=a*b;
				break;
			case 'D':
			case 'd':
				ans=a/b;
				break;
			default:
				System.out.println("\n Incorrect Option");			
		}	
		System.out.println("\n Ans is: "+ans);					
	}
}
//-------------------------------------------------------------------------------------------

import java.util.Scanner;
class DemoSwitch
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		int i=0, opt=0;
		double a=0.0, b=0.0, ans=0.0;

		while(i<3)
		{
			i++;
			System.out.println("\n*** Menu ****");
			System.out.println("1.add \n 2.sub \n 3.multi \n 4.div ");
			System.out.println("select your option: ");
			opt=sc.nextInt();

			System.out.println("Enter any two nos: ");
			a=sc.nextDouble();
			b=sc.nextDouble();
		
			switch(opt)
			{
				case 1:
					ans=a+b;
					break;
				case 2:
					ans=a-b;
					break;
				case 3:
					ans=a*b;
					break;
				case 4:
					ans=a/b;
					break;
				default:
					System.out.println("\n Incorrect Option");			
			}	
			System.out.println("\n Ans is: "+ans);					
		}
	}
}
//-------------------------------------------------------------------------------------------

	// Using the switch within infinite loop (Termination using break)

import java.util.Scanner;
class DemoSwitch
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		int opt=0;
		double a=0.0, b=0.0, ans=0.0;

		while(true)
		{
			System.out.println("\n*** Menu ****");
			System.out.println("1.add \n 2.sub \n 3.multi \n 4.div \n 5.stop");
			System.out.println("select your option: ");
			opt=sc.nextInt();

			if(opt==5)
				break;

			System.out.println("Enter any two nos: ");
			a=sc.nextDouble();
			b=sc.nextDouble();
		
			switch(opt)
			{
				case 1:
					ans=a+b;
					break;
				case 2:
					ans=a-b;
					break;
				case 3:
					ans=a*b;
					break;
				case 4:
					ans=a/b;
					break;
				default:
					System.out.println("\n Incorrect Option");			
			}	
			System.out.println("\n Ans is: "+ans);					
		}
	}
}



//-------------------------------------------------------------------------------------------

	// Using the switch within infinite loop (Termination using System.exit(0) )

import java.util.Scanner;
class DemoSwitch
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		int opt=0;
		double a=0.0, b=0.0, ans=0.0;

		while(true)
		{
			System.out.println("\n*** Menu ****");
			System.out.println("1.add \n 2.sub \n 3.multi \n 4.div \n 5.stop");
			System.out.println("select your option: ");
			opt=sc.nextInt();
			System.out.println("Enter any two nos: ");
			a=sc.nextDouble();
			b=sc.nextDouble();
		
			switch(opt)
			{
				case 1:
					ans=a+b;
					break;
				case 2:
					ans=a-b;
					break;
				case 3:
					ans=a*b;
					break;
				case 4:
					ans=a/b;
					break;
				case 5:
					System.exit(0);
				default:
					System.out.println("\n Incorrect Option");			
			}	
			System.out.println("\n Ans is: "+ans);					
		}
	}
}
//---------------------------------------------------------------------------------------

	// We can use string as a case constant.
import java.util.Scanner;
class DemoSwitchStr
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		
		double a=0.0, b=0.0, ans=0.0;

		System.out.println("\n*** Menu ****");
		System.out.println("add \n sub \n multi \n div ");
		System.out.println("select your option: ");
		String opt=sc.nextLine();

		System.out.println("Enter any two nos: ");
		a=sc.nextDouble();
		b=sc.nextDouble();
		
		switch(opt)
		{
			case "add":
				ans=a+b;
				break;
			case "sub":
				ans=a-b;
				break;
			case "multi":
				ans=a*b;
				break;
			case "div":
				ans=a/b;
				break;
			default:
				System.out.println("\n Incorrect Option");			
		}	
		System.out.println("\n Ans is: "+ans);					
	}
}
*/
