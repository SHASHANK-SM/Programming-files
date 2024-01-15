import java.util.Scanner;
class Mypoint
{
	int x,y;
    Mypoint()
    {
        x=0;
        y=0;
    }
    Mypoint(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    void Setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    int[] getxy()
    {
        int a[]=new int[2];
        a[0]=x;
        a[1]=y;
        return a;
    }
    public String toString()
    {
        return ("point p("+x+","+y+")");
    }
    double distance(int x,int y)
    {
        return(Math.sqrt(Math.pow(this.x-x,2)+Math.pow(this.y-y,2)));
    }
     double distance()
    {
        return(Math.sqrt(Math.pow(this.x,2)+Math.pow(this.y,2)));
    }
     double distance(Mypoint obj)
    {
        return(Math.sqrt(Math.pow(this.x-obj.x,2)+Math.pow(this.y-obj.y,2)));
    }
}
public class TestMypoint
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        Mypoint p1=new Mypoint(10,20);
         Mypoint p2=new Mypoint();
         System.out.println("Enter x and y");
         int x1=s.nextInt();
         int y1=s.nextInt();
         p2.Setxy(x1,y1);
         System.out.print("Point p1 =");
         System.out.println(p1);
         System.out.print("Point p2 =");
         System.out.println(p2);
         System.out.println("Distance between p1 and point="+p1.distance(x1,y1));
         System.out.println("Distance between p2 and origin="+p2.distance());
         System.out.println("Distance between p1 and p2="+p1.distance(p2));
    }
}
