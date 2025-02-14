class DemoThread implements Runnable{
Thread t=null;
public DemoThread(){
t=new Thread(this);
t.setNme("Dthread");
}
public void run(){
for(int i=0;i<20;i++)
{
System.out.println(Thread.currentThread().getName());
try{Thread.sleep(400);}
catch(Exception e){}
}
}
}

class ExampleThreadRunnableStartOutside
{
public static void  main(String []args)
{

System.out.println("main() start..!");
DemoThread t1=new DemoThread();
t1.start();
for(int i=0;i<20;i++)
{
System.out.println(Thread.currentThread().getName());
try{Thread.sleep(400);}catch(Exception e){}
}
System.out.println("main() end..!");
}
}