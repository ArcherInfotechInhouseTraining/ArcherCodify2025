import java.io.BufferedReader;
import java.io.InputStreamReader;
class IOUsingBI
{
	public static void main(String []args)
	{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		try
		{
			System.out.println("\n Enter the string: ");
			String str = br.readLine();
		
			System.out.println("\n Enter the int value: ");
			int x=Integer.parseInt(br.readLine());
		
			System.out.println("\n Enter the fractional value: ");
			double y=Double.parseDouble(br.readLine());

			System.out.println("\n Enter the short value: ");
			Short z=Short.parseShort(br.readLine());

			System.out.println("\n str: "+str+"\n x="+x+"\n y="+y+"\n z="+z);
		}
		catch(Exception e){ }
	}
}