//Using javax.swing.JOptionPane.showInputDialog()
import javax.swing.JOptionPane;
class ShowInputDialog
{
	public static void main(String args[]) throws Exception
	{
		int x=0;
		double d=0.0;
		//String str=" ";
		x=Integer.parseInt(JOptionPane.showInputDialog("\nEnter any integer value"));
		d=Double.parseDouble(JOptionPane.showInputDialog("\nEnter any double value:"));
		//str=br.readLine(JOptionPane.showInputDialog("\nEnter any string:"));
		System.out.println("\nInteger is:"+x);
		System.out.println("\nDouble is:"+d);
		//System.out.println("\nString is:"+str);


	}
}