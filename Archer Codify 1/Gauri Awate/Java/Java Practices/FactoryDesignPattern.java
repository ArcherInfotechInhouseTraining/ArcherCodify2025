class Product
{
	private String name;
	private Product(String name)
	{
		this.name=name;
	} 
	public static Product createProduct(String type)
	{
		if(type.equalsIgnoreCase("Laptop"))
		{
			return new Product("Laptop");
		}
		else if(type.equalsIgnoreCase("Phone"))
		{
			return new Product("Phone");
		}
		else
		{
			return new Product("Unknown type"); 
		}
	}
		public void display()
		{
			System.out.println("Product: "+name);
		}
}
class FactoryDesignPattern
{
	public static void main(String []args)
	{
		Product ob1=Product.createProduct("Laptop");
		Product ob2=Product.createProduct("Tablet");
		Product ob3=Product.createProduct("Phone");
		ob1.display();
		ob2.display();
		ob3.display();
	}
}