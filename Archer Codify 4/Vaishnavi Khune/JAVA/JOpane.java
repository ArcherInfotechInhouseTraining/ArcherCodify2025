import javax.swing.JOptionPane;


class JOpane
{

public static void main(String args[])
{
int x=0;
double y=0.0;

x=Integer.parseInt(JOptionPane.showInputDialog("Enter Int value"));

y=Double.parseDouble(JOptionPane.showInputDialog("Enter double value"));

System.out.println("x="+x+"\t y="+y);

}
}