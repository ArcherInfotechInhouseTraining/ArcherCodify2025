 
 package controller; 
 
import model.Student; import model.StudentDAO; import view.StudentView; 
import java.util.List; 
 
public class StudentController {     private StudentDAO studentDAO; 
    private StudentView studentView; 
 
    public StudentController(StudentDAO studentDAO, StudentView studentView) {         this.studentDAO = studentDAO; 
        this.studentView = studentView; 
    } 
 
    public void registerStudent(String name, int age, String course) {         Student student = new Student(name, age, course);         studentDAO.saveStudent(student); 
        studentView.displayStudentDetails(student); 
    } 
 
    public void showAllStudents() { 
        List<Student> students = studentDAO.getAllStudents();         studentView.displayAllStudents(students); 
    } 
} 
