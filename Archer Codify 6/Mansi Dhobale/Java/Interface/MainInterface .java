interface InOne
{
void start();
}

interface InTwo
{
void Run();
}

class Example
{
void Sort()
{
System.out.println(" in Sort- example class");
}
}

class  Stand extends InTwo implements InOne,InTwo


{

  public Run()
{
System.out.println(" in Run- InTwo Interface");
}

 public Start()
{
System.out.println(" in Start- InOne Interface");
}

 public Display()
{
System.out.println(" \in display of stand class");
}


 }

class mainInterface 
{
public static void main(String []args)
{
 Stand ob = new Stand();

ob.Run();
ob.Start();
ob.Sort();
ob.display();
}
}



