interface Demo
{
	void show();
	void display();
}

class InterfaceEx implements Demo{
	public void show(){
		System.out.println("In Show");
	}
	public void display()
	{
		System.out.println("In Display");
	}
	public static void main(String args[]){
	InterfaceEx a = new InterfaceEx();
	a.show();
	a.display();
	}
}