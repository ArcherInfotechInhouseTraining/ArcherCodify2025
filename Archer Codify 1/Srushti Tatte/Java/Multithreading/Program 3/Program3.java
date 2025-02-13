// Creating Multiple threads of same type

class MyThread extends Thread
{
	public MyThread()
	{
		System.out.println("Thread is created");
	}
	public MyThread(String name)
	{
		super(name);
		System.out.println("Paramterized Constructor of Thread");
	}
	public void run()
	{
		for(int i=0;i<15;i++)
		System.out.println(this);
		try{ Thread.sleep(200);}catch(Exception e){}
	}
}
class Program3
{
	public static void main(String []args)
	{
		MyThread t1=new MyThread("One");
		t1.setPriority(1);
		t1.start();
		MyThread t2=new MyThread("Two");
		t2.setPriority(10);
		t2.start();
		System.out.println("T1 id running :"+t1.isAlive());
		for(int i=0;i<15;i++)
		{
			System.out.println(Thread.currentThread());
			try{Thread.sleep(400);}catch(Exception e){}
		}
		System.out.println("Main has ended");
	}
}