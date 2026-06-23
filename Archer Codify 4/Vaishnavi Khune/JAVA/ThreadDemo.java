class NewThread implements Runnable
{	
	public void run()
	{
		try {
			for(int i = 5; i > 0; i--)
			{
				System.out.println("Child Thread: " + i);
				Thread.sleep(500);
			}
		}catch (InterruptedException e){
			System.out.println("Child interrupted.");
		}
		System.out.println("Exiting child thread.");
	}
}
class ThreadDemo
{
	public static void main(String args[])
	{
		Thread t=new Thread(new NewThread());
		t.start(); // Start the thread

		Thread t1=new Thread(new NewThread());
		t1.start(); // Start the thread

		try
		{
			for(int i = 5; i > 0; i--)
			{
				System.out.println("Main Thread: " + i);
				Thread.sleep(1000);
			}
		}
		catch (InterruptedException e)
		{
			System.out.println("Main thread interrupted.");
		}
		System.out.println("Main thread exiting.");
	}
}
