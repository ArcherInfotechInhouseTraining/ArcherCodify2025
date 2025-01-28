class DemoRel
{
	public static void main(String []args)
	{
		int x=23,y=5;
		boolean b;
		System.out.println("\n x is: "+x+"\t y is: "+y);

		b=x>y;
		System.out.println("\n (x>y) is: "+b);

		b=x!=y;
		System.out.println("\n (x!=y) is: "+b);

		b=y<1;
		System.out.println("\n (y<1) is: "+b);

		b=x%10==0;
		System.out.println("\n (x%10==0) is: "+b);

		b=100%y==0;
		System.out.println("\n (100%y==0) is: "+b);
		
	}
}
