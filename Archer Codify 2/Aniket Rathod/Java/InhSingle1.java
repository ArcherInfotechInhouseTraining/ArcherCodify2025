// Parent class
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Child class
class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

// Child class
class Human extends Animal {
    void speak() {
        System.out.println("The human speaks.");
    }
}

// Main class
public class InhSingle1 {
    public static void main(String[] args) {
        Dog dob = new Dog();
        dob.eat(); // Inherited from the Animal class
        dob.bark(); // Defined in the Dog class

        Human hob = new Human();
        hob.eat(); // Inherited from the Animal class
        hob.speak(); // Defined in the Dog class
    }
}
