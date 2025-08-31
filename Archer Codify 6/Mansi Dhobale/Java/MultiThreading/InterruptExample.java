class MyThread extends Thread
{
	public void run()
	{
		try
		{
			for(int i=0;i<15;i++)
			{
				System.out.println(i + " - "+this);
				Thread.sleep(3000);
			}
		}
		catch (InterruptedException e)
		{
			System.out.println("Thread t1 Terminated");
		}
	}
}
class InterruptExample 
{
	public static void main(String[] args) 
	{
		MyThread t1=new MyThread();
		t1.start();

		try
		{
			for(int i=0;i<15;i++)
			{
				System.out.println("main - "+ i);
				Thread.sleep(600);
				if(i==5)
					t1.interrupt();
			}
		}
		catch(Exception e){}

		
	}
}
