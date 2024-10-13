class Outer
{
    private int x;
    class Inner
    {
        private int y;
        void display()
        {
            System.out.println("Innaer class :"+"x="+x+"y= "+y);
        }
    }
    void display()
    {
        Inner i=new Inner();
        System.out.println("x="+x+"y= "+i.y);
    }
}
public class OutIn 
{
    public static void main(String[] args) 
    {
        Outer  o=new Outer();
        Outer.Inner iobj=o.new Inner();
        o.display();
        iobj.display();
        
    }
}
