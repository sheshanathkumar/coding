import java.io.*;

class ConsoleInputEx
{
	public static void main(String args[])
	{
		Console c = System.console();
		String s = c.readLine();
		System.out.println(s);
	}
}