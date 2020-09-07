class Demo extends Thread
{
	public void run(){
		System.out.println("Thread is Running\n");
	}
}

class Demo1 extends Thread{
	public void run(){
		System.out.println("Another Thread is Running\n");
	}
}

class MyDemoThreadEx
{
	public static void main(String args[])
	{
		Demo a = new Demo();
		Demo b = new Demo();
		Demo1 c = new Demo1();
		System.out.println(a.getName());
		System.out.println(b.getName());
		System.out.println(a.getId());
		System.out.println(b.getId());
		a.setName("SheshoThread");
		System.out.println(a.getName());
		System.out.println(b.getName());
		System.out.println(a.getPriority());
		a.setPriority(Thread.MIN_PRIORITY);
		System.out.println(a.getPriority());
		a.start();
		System.out.println(a.isAlive());
		c.start();
	}
}