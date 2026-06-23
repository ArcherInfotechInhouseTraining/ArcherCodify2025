import javax.swing.JOptionPane;

class javaxswingJOptionPaneshowInputDialog
{
    public static void main(String args[])
{
   int arr[]=new int[5];
  
 for(int i=0;i<arr.length;i++)  
 {
   arr[i]= Integer.parseInt(JOptionPane.showInputDialog("Enter Array Elements:"));
 }

 for(int i=0;i<arr.length;i++)  
 {
   System.out.println(arr[i]);
 }
 }
}