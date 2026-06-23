// Creating Multiple threads of Different type

class MyThread extends Thread{

    public MyThread()
    {
        System.out.println("Default Constructor of MyThread class | MyThread is created");

    }
    public MyThread(String name)
    {
        super(name);
        System.out.println("In Parameterized constructor of MyThread class");

    }
    public void run()
    {
        for(int i=0;i<15;i++)
        {
            System.out.println(this);
            try{Thread.sleep(200);}catch(Exception e){}
        }
    }
}
class YourThread extends Thread{

    public YourThread()
    {
        System.out.println("In default constructor of YouThread class | YourThread is created");
    }
    public YourThread(String name)
    {
        super(name);
        System.out.println("In parameterized constructor of YourThread class ");
        try{Thread.sleep(400);}catch(Exception e){}
    }

}
class Program4
{
    public static void main(String[] args) {
        MyThread t1=new MyThread("One");
        t1.setPriority(1);
        t1.start();

        YourThread t2=new YourThread("Two");
        t2.setPriority(10);
        t2.start();

        System.out.println("t1 is running:"+t1.isAlive());
        for(int i=0;i<15;i++)
        {
            System.out.println(Thread.currentThread().getName());
            try{Thread.sleep(400);}catch(Exception e){}
        }
        System.out.println("Main has ended");
    }
}
