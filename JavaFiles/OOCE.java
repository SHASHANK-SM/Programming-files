import java.util.Scanner;
class OOCException extends Exception
{
	OOCException(String msg)
	{
		super(msg);
	}
}
public class OOCE
{
	static void divide(double a,double b) throws Exception
	{
		if(b==0)
			throw new OOCException("Division by zero not possible");
			double c=a/b;
			System.out.println("c= "+c);
	}
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter values of a and b");
		double x=s.nextDouble();
		double y=s.nextDouble();
		try
		{
			divide(x,y);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("this is finally ran");
		}
	}
	
}

	
	