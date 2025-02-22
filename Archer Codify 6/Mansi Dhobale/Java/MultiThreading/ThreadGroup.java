class MyThread extends Thread{

         public MyThread(){
 System.out.println("Default-MyThread is created..");
}

public MyThread(ThreadGroup tg ,String name){
    super(tg,name);
System.out.println("para-MyThread Is created...");
}

public void run(){

 for(int i=0;i<20;i++){
System.out.println(this);
try{
     Thread.sleep(200);
}
catch(Exception e)
{
}

}
}

}

class YourThread Extends Thread

{
public  YourThread(){
System.out.println("default-yourThread Is created...");
}

public YourThread(ThreadGroup tg,String name){
super(tg,name);
System.out.println("para-MyThread Is created...");
}

public void run(){
for(int i=0;i<20;i++){
System.out.println(this.getName());
try{Thread.sleep(200);}
catch(Exception e)
{
}

}
}

}


class ThreadGroup{
public static void main(String []args)
{
System.out.println("main started");

Thread tg=new ThreadGroup("MyGroup");

MyThread t1=new MyThread(tg,"one");
t1.setPriority(1);
t1.start();

YourThread t2=new YourThread(tg,"Two");
t1.setPriority(1);
t1.start();

System.out.println("T1 is running :"+t1.isAlive());
for(int i=0;i<20;i++){
System.out.println(Thread.currentThread().getNmae());
try{Thread.sleep(400);}
catch(Exception e){}
}
System.out.println("main() ends");
}
}


