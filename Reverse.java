class Rev
{
	private int num;
	public void getInput(int i)
	{
		num = i;
	}
	public void showReverse(){
	int rev = 0;
	for( int j=num; j>0; j/=10){
		int r = j%10;
		rev = rev*10 + r;
		}
	System.out.println(rev);
	}
}

class Reverse
{
	public static void main(String args[])
	{
		Rev num = new Rev();
		num.getInput(199);
		num.showReverse();
	}
}