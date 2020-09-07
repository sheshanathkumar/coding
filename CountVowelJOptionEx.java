import javax.swing.*;

class CountVowelJOptionEx
{
	public static void main(String args[]){
	try{
	String s = JOptionPane.showInputDialog("Enter Sentence");
	int count = 0;
	int length = s.length();
	for( int i=0; i<length; i++ )
	{
		if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
			count++;
	}
	System.out.println(count);
	}
	catch(Exception e){
		System.out.println("Exception:- No Input Given");
		}
	}
}