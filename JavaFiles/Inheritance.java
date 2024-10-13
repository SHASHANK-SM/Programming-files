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
        System.out.println("area of circle is "+3.142*r*r);
    }
    void calculatePerimeter() 
    {
        System.out.println("Perimeter of circle "+2*3.142*r);       
    }
}
class Triangle extends Shape
{
    double a,b,c;
    Triangle(double x,double y,double z)
    {
        x=a;
        y=b;
        z=c;
    }
    void calculateArea()
    {
        double s=(a+b+c);
        double area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("area of Triangle is "+area);
    }
    void calculatePerimeter() 
    {
        System.out.println("Perimeter of Traiangle "+(a+b+c));       
    }
}
public class Inheritance
 {
    public static void main(String[] args) 
    {
        Circle c=new Circle(22.4);
        c.calculateArea();
        c.calculatePerimeter();
        Triangle t=new Triangle(10,20,30);
        t.calculateArea();
        t.calculatePerimeter();
    }
    
}
