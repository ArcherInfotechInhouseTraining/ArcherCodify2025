// View and Controller (EmployeeController.java)
import java.io.*;
import java.util.*;
class EmployeeController {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("1. Add Employee\n2. View Employees\n3. Update Employee\n4. Delete Employee\n5. Exit");
            System.out.print("Choose an option: ");
            int choice = sc.nextInt();
            
            switch (choice) {
                case 1 -> {
                    System.out.print("Enter ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Salary: ");
                    double salary = sc.nextDouble();
                    EmployeeDAO.addEmployee(new Employee(id, name, salary));
                }
                case 2 -> EmployeeDAO.getAllEmployees().forEach(System.out::println);
                case 3 -> {
                    System.out.print("Enter ID to Update: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter New Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter New Salary: ");
                    double salary = sc.nextDouble();
                    EmployeeDAO.updateEmployee(id, name, salary);
                }
                case 4 -> {
                    System.out.print("Enter ID to Delete: ");
                    int id = sc.nextInt();
                    EmployeeDAO.deleteEmployee(id);
                }
                case 5 -> {
                    System.out.println("Exiting...");
                    sc.close();
                    return;
                }
                default -> System.out.println("Invalid Choice!");
            }
        }
    }
}
