class CountVowelConsoleEx
{
	public static void main(String args[])
	{
		String y = args[0];poe
		int count = 0;
		int length = y.length();
		for(int i=0; i<length; i++)
		{
			if(y.charAt(i) == 'a' || y.charAt(i) == 'e' || y.charAt(i) == 'i' || y.charAt(i) == 'o' || y.charAt(i) == 'u')
				count++;
		}
		System.out.println(count);
	}
}