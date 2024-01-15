import java.util.Scanner;
public class Employeeit
{
    String eid,ename;
    double salary;
    void read()
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter id\tname\tsalary");
        eid=s.nextLine();
        ename=s.nextLine();
        salary=s.nextDouble();    
    }
    void display()
    {
        System.out.println(eid + "\t" + ename + "\t" + salary);
    }
    void raisesalary(double per)
    {
        salary=salary+(per/100)*salary;
    }
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of employees");
		 int n=s.nextInt();
        Employeeit e[]=new Employeeit[n];
        for(int i=0;i<n;i++)
        {
            e[i]=new Employeeit();
            e[i].read();
        }
        System.out.println("EID\tNAME\tSALARY");
        for(int i=0;i<n;i++)
        {
            e[i].display();
        }
        System.out.println("Enter the percentage to raise salary");
        double per=s.nextDouble();
        for(int i=0;i<n;i++)
        {
            e[i].raisesalary(per);
        }
		//System.out.println("salary="+salary);
		for(int i=0;i<n;i++)
        {
            e[i].display();
        }
		
       
    }
    
}