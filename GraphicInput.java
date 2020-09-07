import javax.swing.*;

class GraphicInput
{
	public static void main(String args[])
	{
		int x,y;
		x = Integer.parseInt(JOptionPane.showInputDialog("Enter No:- "));
		y = Integer.parseInt(JOptionPane.showInputDialog("Enter No:- "));
		System.out.println (x+y);
	}
}