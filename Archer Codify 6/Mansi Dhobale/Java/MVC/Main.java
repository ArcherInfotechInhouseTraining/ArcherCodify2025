import controller.StudentController;
 import model.StudentDAO;
 import view.StudentView; import java.util.Scanner;
 public class Main { 
    public static void main(String[] args) {         Scanner scanner = new Scanner(System.in); 
        StudentDAO studentDAO = new StudentDAO(); 
        StudentView studentView = new StudentView(); 
        StudentController controller = new StudentController(studentDAO, studentView); 
 
        while (true) { 
            System.out.println("\n1. Register Student"); 
            System.out.println("2. Show All Students"); 
            System.out.println("3. Exit"); 
            System.out.print("Choose an option: "); 
 
            int choice = scanner.nextInt(); 
            scanner.nextLine();  // Consume newline 
 
            switch (choice) {                 case 1: 
                    System.out.print("Enter Name: "); 
                    String name = scanner.nextLine();              
               System.out.print("Enter Age: ");                    
            int age = scanner.nextInt(); 
                    scanner.nextLine();  // Consume newline 
                    System.out.print("Enter Course: "); 
                    String course = scanner.nextLine(); 
 
                    controller.registerStudent(name, age, course);       
              break; 
                 case 2: 
                    controller.showAllStudents();                 
              break; 
                 case 3: 
                    System.out.println("Exiting..."); 
                    scanner.close();           
              System.exit(0); 
                    break; 
                 default: 
                    System.out.println("Invalid choice. Try again."); 
            } 
        } 
    } 
} 
