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
        return "Employee{name='" + name + "', Age=" + age + "}";
    }
}
class DemoString
{
		public static void main(String []args){
			Person p=new Person("Gauri",21);
			p.setName("Gauri");
			Person p1=new Person("Gauri",21);

			p1.setAge(21);
			System.out.println("\nAge and name:"+p+"\t"+p1) ;
			
			
		}
}
