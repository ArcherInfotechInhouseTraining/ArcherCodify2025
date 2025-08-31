class DemoThread implements Runnable{
Thread t=null;
public DemoThread(){
t=new Thread(this);
t.setName{"DThread");
t.start();
}
public void run(){
for(int i=0;i<20;i++){
System.out.println(t.getName());
try{Thread,sleep(200);}catch(Exception e){}
}
}
}
class ExampleThreadRunnableanother
{
public static void main(String[]args)
{
System.out.println("main start..!");
DemoThread d1=new DemoThread();

for(int i=0;i<20;i++)
{
System.out.println(Thread.currentThread().getName());
try(Thread.sleep(400);}
catch(Exception e){}
}
System.out.println("main end..!");
}
}
