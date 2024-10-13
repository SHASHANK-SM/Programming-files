import java.util.Scanner;
class Staff
{
    String eid,name, phone;
    int salary;
    Scanner s=new Scanner(System.in);
    void read()
    {
        System.out.println("Enter the eid\tname\tphone\tsalary\n");
        eid=s.nextLine();
        name=s.nextLine();
        phone=s.nextLine();
        salary=s.nextInt();
    }
    void display()
    {
        System.out.println(eid+"\n"+name+"\n"+phone+"\n"+salary);
    }
}
class Teaching extends Staff
{
    String Domain,Publications;;
    Scanner s=new Scanner(System.in);
    void read()
    {
        super.read();
        System.out.println("Enter the Domain and Publications\n");
         Domain=s.nextLine();
          Publications=s.nextLine();      
    }
    void display()
    {
        super.display();
        System.out.println(Domain+"\t"+Publications);
    }
}
class Technical extends Staff
{
    String Skills;
    Scanner s=new Scanner(System.in);
    void read()
    {
        super.read();
        System.out.println("Enter the Skills\n");
       Skills=s.nextLine();    
    }
    void display()
    {
        super.display();
        System.out.println(Skills+"\n");
    }
}
class Contract extends Staff
{
    String Periods;
    Scanner s=new Scanner(System.in);
    void read()
    {
        super.read();
        System.out.println("Enter the Periods\n");
        Periods=s.nextLine();   
    }
    void display()
    {
        super.display();
        System.out.println(Periods);
    }
}
public class Showme
{
   public static void main(String args[]) 
    {
        Teaching t=new Teaching();
        t.read();
        System.out.println("Teaching staff details are :\n");
        t.display();
        Technical t1=new Technical();
        t1.read();
        System.out.println("Technical staff details are :\n");
        t1.display();
        Contract c=new Contract();
        c.read();
        System.out.println("Contract staff details are :\n");
        c.display();
    }

}