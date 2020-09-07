class ConsoleExArray2D
{
	public static void main(String args[])
	{
		
	
		int a[][] = new int[3][4];
		int k=0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
				a[i][j] =Integer.parseInt (args[k++]);
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
				System.out.print(a[i][j] + "\t");
			System.out.printf("\n");
		}
	}
}