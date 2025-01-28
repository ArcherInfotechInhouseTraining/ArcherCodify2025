import java.util.ArrayList;
import java.util.List;

public class Cart {
    private List<Product> items = new ArrayList<>();

    public void addToCart(Product product) {
        items.add(product);
    }

    public List<Product> getItems() {
        return items;
    }

    public void clearCart() {
        items.clear();
    }

    public double calculateTotal() {
        return items.stream().mapToDouble(Product::getPrice).sum();
    }
}

