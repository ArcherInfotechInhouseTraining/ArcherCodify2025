class Demo12
{
	private int x;
	public void in(){
		x=100;
	}
	public void out(){
		System.out.println("x="+x);
	}
}
class MainClass12
{
	public static void main(String []args)
	{
		Demo12 ob=new Demo12();

		ob.in();
		ob.out();
	}
}
