// Using Runnable Interface to create the Threads.
class DemoThread implements Runnable{
public void run(){
 for(int i=0;i<20;i++)
{
System.out.println(Thread.currentThread().getName());
try{Thread.sleep(200);}catch(Exception e){}
}
}
}
class ExampleThreadRunnable
{
public static void main(String []args)
{
System.out.println("main starts!!");
Thread t1=new Thread(t1);
t1.start();
for(int i=0;i<20;i++)
{
System.out.println(Thread.currentThread().getName());
try{Thread.sleep(400);}catch(Exception e){}
}
System.out.println("main() end...!");
}
}