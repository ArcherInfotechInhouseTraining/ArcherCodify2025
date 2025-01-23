class  Example {
    public void display(String  message) {
        System.out.println(message);
    }

    public void display() {
        display("Default message");
    }

    public static void main(String[] args) {
        Example example = new Example();
        example.display(); // Output: Default message
        example.display("Custom message"); // Output: Custom message
    }
}