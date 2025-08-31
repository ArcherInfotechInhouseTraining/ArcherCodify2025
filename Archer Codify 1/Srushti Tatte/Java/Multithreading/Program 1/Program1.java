class MyThread extends Thread
{
	public MyThread()
	{
		System.out.println("Thread created.");
	}
	public void run()
	{
		System.out.println("Thread is running");
	}
}
class Program1
{
	public static void main(String []args)
	{
		System.out.println("Main has started");
		MyThread t1=new MyThread();
		t1.start();
		System.out.println("T1 is running : "+t1.isAlive());
		System.out.println("Main has ended");
	}
}
