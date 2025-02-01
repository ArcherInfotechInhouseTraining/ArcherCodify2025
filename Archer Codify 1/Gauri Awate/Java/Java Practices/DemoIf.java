import java.io.InputStreamReader;
import java.io.BufferedReader;
class DemoIf
{
	public static void main(String []args)
	{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(isr);

		int a=0;
		try
		{
			System.out.println("Enter the value of a: ");
			a=Integer.parseInt(br.readLine());
		}
		catch(Exception e){}		

		if(a%7==0)
		{
			System.out.println("Entered no is div by 7 ");
		}
		if(a%7!=0)
		{
			System.out.println("Entered no is not div by 7 ");
		}
	}
}

