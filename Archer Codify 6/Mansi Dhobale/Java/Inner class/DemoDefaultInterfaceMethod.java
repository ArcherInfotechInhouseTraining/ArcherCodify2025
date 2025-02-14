
interface MyInterface
{
	void show();
	default void displayMessage() {
		System.out.println("This is Default Message");
	}
}
class MyClass implements MyInterface
{
	public void show() {
		System.out.println("In MyClass show()");
	}
	public void display() {
		System.out.println("In MyClass display()");
	}
}
class YourClass implements MyInterface
{
	public void show() {
		System.out.println("In YourClass show()");
	}
	public void displayMessage() {
		System.out.println("This is Custom Message");
	}
}
class DemoDefaultInterfaceMethod 
{
	public static void main(String[] args) 
	{
		MyClass ob = new MyClass();
		ob.show();
		ob.display();
		ob.displayMessage();
	
		System.out.println("\n ------------------------------------------");

		YourClass ob1 = new YourClass();
		ob1.show();
		ob1.displayMessage();
	}
}

