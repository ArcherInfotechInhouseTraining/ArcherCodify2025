class DemoAnThread
{
public static void main(String []args)]
{
 public static void main(String []args)
{
System.out.println("main started..");
Thread t2=new Thread(){

public void run(){
for(int i=0;i<20;i++){
System.out.println("t1="+I);
try{
Thread.sleep(600);}
catch(Exception e){}
}
}
};

t1.start();
for(int i=0;i<20;i++)
{
System.out.println("main -"+i);
try{
thread.sleep(1200);}
catch(Exception e){}
}
System.out.println("main ended...!!!");
}
}