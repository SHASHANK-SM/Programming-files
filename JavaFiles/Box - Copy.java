import java.util.Scanner; 

class Example{
    double l,b,h;
    double volume()
    {
        double v=l*b*h;
        return v;
    }
    void area(int l,int b,int h)
    {
        double a= (2.0)* (l*b+b*h+h*l);
        System.out.println("area="+" "+a);
    }
}

class Box
{
    public static void main(String args[]){
    Scanner s=new Scanner(System.in);
    Example obj=new Example();
    System.out.println("Enter the l,b and h ");
    obj.l=s.nextDouble();
    obj.b=s.nextDouble();
    obj.h=s.nextDouble();
    double v = obj.volume();
    System.out.println("volume="+" "+v);
    obj.area(10,20,30);
    }
}
