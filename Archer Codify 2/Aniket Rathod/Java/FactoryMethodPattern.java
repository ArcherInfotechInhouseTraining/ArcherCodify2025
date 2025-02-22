class Product
{
    private String name;
    private Product(String name)
    {
        this.name = name;
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
            return new Product("Unknown Product");
        }
    }

    public void display()
    {
        System.out.println("Product: " + name);
    }
}

public class FactoryMethodPattern 
{
    public static void main(String[] args)
    {
        Product p1 = Product.createProduct("Laptop");
        Product p2 = Product.createProduct("Tablet");

        p1.display();
        p2.display();
    }
}
