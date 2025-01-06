import java.io.InputStreamReader;
import java.io.BufferedReader;

class BuffReader
{
	public static void main(String []args) throws Exception
	{
		InputStreamReader isr= new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(isr);

		System.out.println("Enter the int values: ");
		int a=Integer.parseInt(br.readLine());

		System.out.println("Enter the name: ");
		String str=br.readLine();
 
		System.out.println("Enter the character: ");
		char ch=br.readLine().charAt(0);

		System.out.println("Int: "+a+" Name: "+str+" Character : "+ch);

	}

}