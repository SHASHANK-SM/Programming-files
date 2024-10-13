import java.util.Scanner;
class OOCException extends Exception
{
    OOCException(String msg)
    {
        super(msg);
    }
}
public class OOcExc {
    static void divide(int a,int b) throws OOCException
    {
        if(b==0)
        throw new OOCException("Division by zero is not possible");
        int c=a/b;
        System.out.println("c= "+c);
    }
    public static void main(String args[])
    {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the values of x and y");
        int x=s.nextInt();
        int y=s.nextInt();
        try
        {
            divide(x,y);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally{
            System.out.println("This is finally block");
        }
    }
    
}
