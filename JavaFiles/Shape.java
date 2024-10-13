abstract class Demo
{
    abstract void Draw();
    abstract void Erase();
}
class Circle extends Demo
{
    void Draw()
    {
        System.out.println("Drwaing a circle");
    }
    void Erase()
    {
        System.out.println("Erasing circle");
    }
}
class Triangle extends Demo
{
    void Draw()
    {
        System.out.println("Drwaing a Triangle");
    }
    void Erase()
    {
        System.out.println("Erasing Triangle");
    }
}
class Square extends Demo
{
    void Draw()
    {
        System.out.println("Drwaing a Square");
    }
    void Erase()
    {
        System.out.println("Erasing Square");
    }
}
public class Shape
{
    public static void main(String[] args) {
        Circle c=new Circle();
        c.Draw();
        c.Erase();
        Triangle t=new Triangle();
        t.Draw();
        t.Erase();
        Square s=new Square();
        s.Draw();
        s.Erase();
    }
}
