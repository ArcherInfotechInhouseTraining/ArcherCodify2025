import spark.ModelAndView;
import spark.template.mustache.MustacheTemplateEngine;

import java.util.HashMap;
import java.util.Map;

import static spark.Spark.*;

public class ECommerceController {
    public static void main(String[] args) {
        staticFiles.location("/public");

        Product product1 = new Product(1, "Product 1", 20.00);
        Product product2 = new Product(2, "Product 2", 15.00);
        Product product3 = new Product(3, "Product 3", 30.00);

        Cart cart = new Cart();

        get("/", (request, response) -> {
            Map<String, Object> model = new HashMap<>();
            model.put("products", List.of(product1, product2, product3));
            return new ModelAndView(model, "index.mustache");
        }, new MustacheTemplateEngine());

        post("/addToCart/:productId", (request, response) -> {
            int productId = Integer.parseInt(request.params("productId"));
            Product product = getProductById(productId);
            if (product != null) {
                cart.addToCart(product);
            }
            response.redirect("/");
            return null;
        });

        get("/cart", (request, response) -> {
            Map<String, Object> model = new HashMap<>();
            model.put("cart", cart.getItems());
            model.put("total", cart.calculateTotal());
            return new ModelAndView(model, "cart.mustache");
        }, new MustacheTemplateEngine());

        post("/checkout", (request, response) -> {
            // Handle checkout logic (e.g., payment processing)
            cart.clearCart();
            response.redirect("/");
            return null;
        });
    }

    private static Product getProductById(int productId) {
        // Implement product retrieval logic (e.g., from a database)
        switch (productId) {
            case 1:
                return new Product(1, "Product 1", 20.00);
            case 2:
                return new Product(2, "Product 2", 15.00);
            case 3:
                return new Product(3, "Product 3", 30.00);
            default:
                return null;
        }
    }
}
