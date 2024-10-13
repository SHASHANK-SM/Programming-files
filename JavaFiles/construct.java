 class Box
{
    double l,b,h;
    Box(double l,double b,double h)
    {
        l=l;
        b=b;
        h=h;
    }
    public static void main(String args[])
    {
        Box c=new Box(10,20,30);
        System.out.println("l="+c.l+"h="+c.h+"b="+c.b);
    }
}