//Data Input as a commandline argument
class InputCmdln
{
 	public static void main(String args[]) 
	{

		String s1="-";
		String s2="-";
	try
		{
			s1=args[0];
                	s2=args[1];
                	
		}
	catch(Exception e){}
			System.out.println("\nString s1:"+s1);
			System.out.println("\nString s2:"+s2);
	}

}
