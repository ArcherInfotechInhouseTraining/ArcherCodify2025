interface maininterface{
void area();
default void show()
{
System.out.println("\n helllo");
}

class yourinterface extends maininterface
{
     void area()
{
System.out.println("\n syatem is running in yourinterface");
}
void run()
{
System.out.println("\n in yourinterface");
}
}


class myinterface extends maininterface{
void area()
{
System.out.println("\n syatem is running in myinterface");
}

void show()
{
int a,b;
System.out.println("add:",a+b);
}

}

class MinInterface{
public static void main(String []args)
{
myinterface mi=new myinterface;
mi.area();
mi.show();

yourinterface yi=new yourinterface();
yi.area();
yi.show();
}
}

