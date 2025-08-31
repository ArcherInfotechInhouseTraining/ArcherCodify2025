import java.io.InputStreamReader;
import java.io.BufferedReader;

class Main
{
   public static void main(String []args) throws Exception
	{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		char ch=' ';
		
		System.out.println("\n Enter the character: ");
		ch = br.readLine().charAt(0);
		
		System.out.println("\n character is="+ch);
	}
 
}
