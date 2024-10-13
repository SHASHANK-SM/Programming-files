interface Resizable
{
    void resizewidth(int width);
    void resizeheight(int height);
}
class Rectangle implements Resizable
{
    int width,height;
    Rectangle(int a,int b)
    {
        width=a;
        height=b;
    }
    public void resizewidth(int width)
    {
        this.width=width;
    }
    public void resizeheight(int height)
    {
        this.height=height;
    }
}
public class Resize 
{
    public static void main(String[] args) {
        Rectangle r=new Rectangle(10, 20);
        System.out.println("dimensions before :"+"width :"+r.width+"height"+r.height);
        r.resizeheight(30);
        r.resizewidth(40);
        System.out.println("dimensions after :"+"width :"+r.width+"height"+r.height);
    }
}
