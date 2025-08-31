// Creating the main and one userdefined thread

class MyThread extends Thread
{
	public MyThread()
	{
		System.out.println("Thread has been created");
	}
	public void run()
	{
		for(int i=0;i<15;i++)
		{
			System.out.println(this);
			try
			{
				Thread.sleep(200);
			}
			catch(Exception e){}
		}
	}
}
class Program2
{
	public static void main(String[]args)
	{
		MyThread t1=new MyThread();
		t1.start();
		System.out.println("T1 id running :"+t1.isAlive());
		for(int i=0;i<15;i++)
		{
			System.out.println(Thread.currentThread());
			try
			{
				Thread.sleep(400);
			}
			catch(Exception e){}
		}
		System.out.println("Main has ended");
	}
}