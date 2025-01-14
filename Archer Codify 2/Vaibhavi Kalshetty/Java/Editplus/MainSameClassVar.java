//1) Declaring var as static
/*
class MainSameClassVar 
{
	private static int a=20;
		
	public static void main(String[] args) 
	{
		System.out.println("A:"+a);

	}
}*/
//2)Creating obj of same class
class MainSameClassVar
{
	private static int a=10;
	public static void main(String args[])
	{
		MainSameClassVar ob=new MainSameClassVar();
		System.out.println(" "+ob.a);
	}
}
