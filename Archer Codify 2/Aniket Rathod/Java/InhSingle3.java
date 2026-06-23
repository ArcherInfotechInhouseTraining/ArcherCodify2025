class Calculator {
    // Method 1: Adding two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Method 2: Adding three numbers (overloading)
    int add(int a, int b, int c) {
        return a + b + c;
    }

    int add(int a, int b, int c, int d){
        return a + b + c+ d;
    }
    
}

public class InhSingle3 {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        System.out.println(calc.add(5, 10)); // Calls the first add method
        System.out.println(calc.add(5, 10, 15)); // Calls the second add method
        System.out.println(calc.add(5, 10, 15, 20));
    }
}
