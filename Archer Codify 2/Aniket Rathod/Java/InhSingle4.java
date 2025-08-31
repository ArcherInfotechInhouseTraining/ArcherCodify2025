class Animal {
    void sound() {
        System.out.println("Some generic animal sound.");
    }
}

class Dog extends Animal {
    // Overriding the sound method of the parent class
    void sound() {
        System.out.println("The dog barks.");
    }
}

public class InhSingle4 {
    public static void main(String[] args) {
        Animal myAnimal = new Animal();
        myAnimal.sound(); // Calls the parent class method

        Dog myDog = new Dog();
        myDog.sound(); // Calls the overridden method in the child class
    }
}
