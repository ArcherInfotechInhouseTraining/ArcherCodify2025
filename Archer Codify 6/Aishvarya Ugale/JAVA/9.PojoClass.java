
class Person {

   private String name;
    private int age;

    public Person() {
    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    @Override
    public String toString() {
        return "Person{name='" + name + "', Age=" + age + "}";
    }
}
 class Main {
    public static void main(String[] args) {
        // Creating a Person object using the default constructor
        Person person1 = new Person();
        person1.setName("John Doe");
        person1.setAge(25);

        // Creating a Person object using the parameterized constructor
        Person person2 = new Person("Jane Smith", 30);

        // Printing the Person objects
        System.out.println(person1);
        System.out.println(person2);
    }
}
