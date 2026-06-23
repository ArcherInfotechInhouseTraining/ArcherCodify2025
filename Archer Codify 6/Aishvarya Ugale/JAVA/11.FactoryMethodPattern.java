
class Product {
    
    private String name; //A private field to store the name of the product. This variable is only accessible within the Product class.

    // Private constructor
    private Product(String name) { //This ensures objects can only be created using the static factory method defined in the class.
                                   //this.name = name; Assigns the value of the parameter name obj create zalyavr lagech constructor call jato mg je parameter ahe te name madhe jata 
        this.name = name;
    }

    // Static factory method
    public static Product createProduct(String type) { //A static factory method that creates Product objects based on the type argument.
                                                       //This encapsulates the object creation logic, making the Product class easier to maintain and extend.
        if (type.equalsIgnoreCase("Laptop")) { //jo parameter yetoy jr to match hot asla tr mhnje equalsignorecase he equal ahe ka check krto case sensitive nhi bght
            return new Product("Laptop");   // Asel tr obj create krnar obj create zal ki constructor call honar ani ti string name mdhe janar
        } else if (type.equalsIgnoreCase("Phone")) {
            return new Product("Phone");
        } else {
            return new Product("Unknown Product");
        }
    }

    public void display() {
        System.out.println("Product: " + name); // string display honar  obj through pass zaleli
    }
}

class DemoFactoryMethodPattern
{
    public static void main(String[] args) {
        Product p1 = Product.createProduct("Laptop");
        Product p2 = Product.createProduct("Tablet");
       

        p1.display();  // Output: Product: Laptop
        p2.display();  // Output: Product: Unknown Product
    }
}
