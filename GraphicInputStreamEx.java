import javax.swing.*;

class GraphicInputStreamEx
{
	public static void main(String args[])
	{
	try{
		//---------Taking String--------//
		/*String s1, s2;
		s1 = JOptionPane.showInputDialog("Enter 1st Sentence:-  ");
		s2 = JOptionPane.showInputDialog("Enter 2nd Sentence:-  ");
		System.out.println(s1 +" " + s2);
		char x = s1.charAt(0);
		System.out.println(x + "  " + s2);*/
		
		//---------Creating Array-------//
		int x[][]= new int [2][2];
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
				x[i][j] = Integer.parseInt(JOptionPane.showInputDialog("Enter  "));
		}
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
				System.out.print(x[i][j] + " ");
			System.out.printf("\n");
		}
	}
	catch (Exception e)
	{
		System.out.println("Attention:::You didnt Store Any value::::::");
		}
	}
}