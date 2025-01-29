//Array input and display - showInputDialog()
import java.util.*;
import javax.swing.JOptionPane;
class ArrayInput
{
    	public static void main(String args[])
	{
		String data=JOptionPane.showInputDialog("\nEnter the space separated data:");
		System.out.println("Entered string: "+data);

		String []nums = data.split(" ");
		int []ar = new int[nums.length];		

		System.out.println("\n Enter array: ");
		for(int i=0 ; i<nums.length ; i++)
		{
			ar[i]=Integer.parseInt(nums[i]);
		}

		System.out.println("\n1. Array elements are: ");
		for(int x : ar)
		{
			System.out.print("    "+x);
		}

	}
}