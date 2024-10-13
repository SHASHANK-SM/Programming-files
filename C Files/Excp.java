
public class Excp 
{
    public static void main(String args[])
    {
        int a,b,c;
        try
        {
            a=10;
        b=0;
        c=a/b;
        System.out.println("c = "+c );
        try
        {
            int  arr[]=new int[4];
            arr[5]=2;
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
    }
    catch(Exception e)
    {
        System.out.println(e);
    }
        finally
        {
            System.out.println("classes are closed");
        }


    }
}
