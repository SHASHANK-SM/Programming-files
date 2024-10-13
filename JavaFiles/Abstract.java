abstract class Shape
{
    abstract void calculateArea();
    abstract void calculatePerimeter();
}
class Circle extends Shape
{
    double r;
    Circle(double r)
    {
        this.r=r;
    }
    void calculateArea()
    {
        System.out.println("area of circle is = "+3.142*r*r);
    }
    void calculatePerimeter()
    {
        System.out.println("Perimeter of Circle is = "+2*3.142*r);
    }
}
class Triangle extends Shape{
    double a,b,c;
    Triangle(double x,double y,double z)
    {
        x=a;
        y=b;
        z=c;
    }
    void calculateArea()
    {
       double s=(a+b+c)/2;
        double area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("Area of triangle is = "+area);
    }
    void calculatePerimeter()
    {
        System.out.println("Perimeter of Triangle is = "+(a+b+c));
    }
}
    public class Abstract
    {
    public static void main(String args[])
    {
        Circle c=new Circle(22.5);
        c.calculateArea();
        c.calculatePerimeter();
        Triangle t=new Triangle(10,20,30);
        t.calculateArea();
        t.calculatePerimeter();
    }
}
