import java.io.InputStreamReader;
import java.io.BufferedReader;
/*
class InputStreamReader1
{
	public static void main(String[] args) 
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		try
		{
			System.out.println("Enter the String:");
			String str=br.readLine();
			System.out.println("Enter the Integer:");
			int a=Integer.parseInt(br.readLine());
			System.out.println("Enter the Integer:");
			double b=Double.parseDouble(br.readLine());
		}
		catch (Exception e)
		{
		}
		
	}
}
*/


class InputStreamReader1
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
			System.out.println("Enter the String:");
			String str=br.readLine();
			System.out.println("Enter the Integer:");
			int a=Integer.parseInt(br.readLine());
			System.out.println("Enter the Integer:");
			double b=Double.parseDouble(br.readLine());
		
	}
}
