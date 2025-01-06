import java.util.Scanner; 
class DemoCharArray
{
	public static void main(String []args)
	{
		Scanner sc =new Scanner(System.in);
		
		char []ch={'V','A','I','S','H','N','A','V','I'};
		System.out.print("Char Array: ");
		for(char k:ch)
		{
			System.out.print(k);
		}

		System.out.println("\nEnter the string: ");
		String str=sc.nextLine();

		char []ch1=str.toCharArray();
		System.out.println("\nChar Array1: ");
		for(char k:ch1)
		{
			System.out.print(" _"+k);
		}


	}

}