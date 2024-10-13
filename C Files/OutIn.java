class Outer
{
    int x;
    private int y;
    class Inner
    {
        private int d;
        void display()
        {
            System.out.println("Inner class display d="+d+"y="+y);
        }
    }
    void display()
    {
        Inner i=new Inner();
        System.out.println("Outer class dsiplay d="+i.d);
    }
}
public class OutIn 
{
    public static void main(String args[])
    {
    Outer o=new Outer();
    Outer.Inner iobj= Outer.Inner();
    o.display();
    iobj.display();
    }
}
