interface InOne
{
void start();
}

interface InTwo
{
void run();
}

class Example
{
void sort()
{
System.out.println(" in Sort- example class");
}
}

class  Stand extends Example implements InOne,InTwo


{

  public void run()
{
System.out.println(" in Run- InTwo Interface");
}

 public  void start()
{
System.out.println(" in Start- InOne Interface");
}

 public void  display()
{
System.out.println(" in display of stand class");
}


 }

class mainInterface 
{
public static void main(String []args)
{
 Stand ob = new Stand();

ob.run();
ob.start();
ob.sort();
ob.display();
}
}



