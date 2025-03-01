
package view; 
 
import model.Student; 
import java.util.List; 
 
public class StudentView {     public void displayStudentDetails(Student student) { 
        System.out.println("\nStudent Details:"); 
        System.out.println("Name: " + student.getName()); 
        System.out.println("Age: " + student.getAge()); 
        System.out.println("Course: " + student.getCourse()); 
    } 
 
    public void displayAllStudents(List<Student> students) {         System.out.println("\nAll Registered Students:"); 
        for (Student student : students) { 
            System.out.println(student.getName() + " - " + student.getAge() + " - " + student.getCourse()); 
        } 
    } 
} 
 
