import java.io.*;

class InputConsoleEx
{
	public static void main(String args[])
	{
		Console c = System.console();
		char ch = (c.readLine()).charAt(0);
		String s = c.readLine();
		int x[] = new int [5];
		for(int i=0; i<5; i++){
			x[i] = Integer.parseInt(c.readLine());
		}
		System.out.println(ch +" " + s);
		for(int i=0; i<5; i++)
			System.out.print(x[i] + " ");
	}
}