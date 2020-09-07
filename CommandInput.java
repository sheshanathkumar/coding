
class CommandInput
{
	public static void main(String args[])
	{
		int x[] = new int [args.length];
		for(int i=0; i<x.length; i++)
			x[i] = Integer.parseInt(args[i]);
		for(int i=0; i<x.length; i++)
			System.out.println(x[i]);
		
	}
}