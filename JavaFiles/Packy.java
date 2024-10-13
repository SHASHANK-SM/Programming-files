package mypackage;
import java.util.Scanner;
public class Packy
{
	int x;
	public int y;
	private int z;
	protected int p;
	public void read()
	{
		Scanner s= new Scanner(System.in);
		System.out.println("Enter the values");
		x=s.nextInt();
		y=s.nextInt();
		z=s.nextInt();
		p=s.nextInt();
	}
	public void display()
	{
		System.out.println("x= "+x+"y= "+y+"z= "+z+"p= "+p);
	}
}
		
		