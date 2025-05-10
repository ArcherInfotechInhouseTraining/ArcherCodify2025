// Utility class means  member fun static mean oj create karaychi garajj nahi khi tore kraych nahi kahi gosht return karychi asel tr for eg math fun 
class UtilityClass {

    // Private constructor to prevent instantiation
    private UtilityClass() {
        throw new UnsupportedOperationException("Cannot instantiate UtilityClass.");
    
    }

    // Static utility method
    public static int add(int a, int b) {
        return a + b;
    }
}
class DemoUtilityClasses
{
	
    public static void main(String[] args) {
        int result = UtilityClass.add(5, 10);
        System.out.println("Result: " + result);  // Output: Result: 15

          //UtilityClass obj = new UtilityClass();  // Compilation error if uncommented
    }
}
