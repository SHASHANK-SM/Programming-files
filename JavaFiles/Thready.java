import java.util.Random;
class Square implements Runnable
{
	Thread t;
	int x;
	public Square(int n)
	{
		x=n;
		t=new Thread(this,"Thread 3");
		t.start();
	}
	public void run()
	{
		System.out.println("Square of value : "+x*x);
	}
}
class Cube implements Runnable
{
	Thread t;
	int x;
	public Cube(int n)
	{
		x=n;
		t=new Thread(this,"Thread 2");
		t.start();
	}
	public void run()
	{
		System.out.println("Cube of value : "+x*x*x);
	}
}
class Generate implements Runnable
{
	Thread t;
	Generate()
	{
		t=new Thread(this,"Thread 1");
		t.start();
	}
	public void run()
	{
		Random r=new Random();
		while(true)
		{
			int n=r.nextInt(1000);
			System.out.println("Generated number is :"+n);
		Square s=new Square(n);
		Cube c=new Cube(n);
		try
		{
			Thread.sleep(1000);
		}
		catch(InterruptedException e)
		{
			System.out.println(e);
		}
		}
	}
}
public class Thready 
{
	public static void main(String args[])
	{
		Generate g=new Generate();
	}
}
	
		
		
	