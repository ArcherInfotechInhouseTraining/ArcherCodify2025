package model; 
 
import java.io.*; import java.util.ArrayList; 
import java.util.List; 
 
public class StudentDAO { 
    private static final String FILE_NAME = "students.txt"; 
 
    // Save student to file 
    public void saveStudent(Student student) {         try (FileWriter fw = new FileWriter(FILE_NAME, true);              BufferedWriter bw = new BufferedWriter(fw)) { 
            bw.write(student.getName() + "," + student.getAge() + "," + student.getCourse());             bw.newLine();         } catch (IOException e) {             e.printStackTrace(); 
        } 
    } 
 
    // Retrieve all students from file     public List<Student> getAllStudents() {         List<Student> students = new ArrayList<>(); 
        try (BufferedReader br = new BufferedReader(new FileReader(FILE_NAME))) { 
            String line; 
            while ((line = br.readLine()) != null) {                 String[] data = line.split(","); 
                students.add(new Student(data[0], Integer.parseInt(data[1]), data[2])); 
            } 
        } catch (IOException e) {             e.printStackTrace(); 
        } 
        return students; 
    } 
} 
