
public class Main
{
	public static void main(String[] args) {
		String s1 ="-";
		String s2 = "-";
		
	
	    try {	
		s1=args[0];
		s2=args[1];
	    }
		catch(Exception e) { }
		System.out.println("String 1 is : "+s1);
		System.out.println("String 2 is : "+s2);
	}
}
