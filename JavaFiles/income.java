import java.util.Scanner;
class Employee{
    String id,name;
    double salary;
    void read()
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter id,name,salary\n");
        id=s.next();
        name=s.next();
        salary=s.nextDouble();
    }
    void display()
    {
        System.out.println("eid+\t+ename+\t+salary");
    }
    void raisesalary(double per)
    {
        salary=salary+(per/100)*salary;
    }
}
public class income
{
    public static void main(String args[])
    {
        int i;
        Scanner s=new Scanner(System.in);
        System.out.println("enter the no of employee");
        int n=s.nextInt();
        Employee e[]=new Employee[n];
        for(i=0;i<n;i++)
        {
            e[i]=new Employee();
            e[i].read();
        }
        System.out.println("eid"\t"+ename+"\t"+salary);
        for(i=0;i<n;i++)
        {
            e[i].display();
        } 
        System.out.println("enter the percentage to raise salary");
        double per=s.nextDouble();
        for( i=0;i<n;i++)
        {
            e[i].raisesalary(per);
        }
        for(i=0;i<n;i++)
        {
            e[i].display();
        }
        for(i=0;i<n;i++)
        {
           System.out.println("salary of individual employee is= "+e[i].salary);
        }
       
    }
}