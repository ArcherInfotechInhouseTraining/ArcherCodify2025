interface Greeting{
default void sayhi(){
System.out.pritnln("\n defaultsay hi method");
logstatic("hi fromdefault method");
}


static void sayhi{
System.out.pritnln("\n static say hi method");
logstatic("hi from static method");
}



private void log(String message)
{
System.out.println("logging:"+message);
}


private static void logstatic(String message){
System.out.println("logging  (static):"+message);
}
}

public class PrivateStaticMethod{
public  static  void  main( String []args)
{
Greeting obj=new Greeting(){};
}
obj.sayhi();
Greeting.sayhi();
}
}

