import java.util.Scanner;
class Employeeit
{
    String eid,ename;
    double salary;
    void read()
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter id\tname\tsalary\n");
        eid=s.nextLine();
        ename=s.nextLine();
        salary=s.nextDouble();    
    }
    void display()
    {
        System.out.println(eid+"\t"+ename+"\t"+salary+"\n");
    }
    void raisesalary(int per)
    {
        salary=salary+(per/100)*salary;
    }
    public static void main(String args[])
    {
        Scanner s=new scanner(System.in);
        System.out.println("Enter the number of employees\n");
        Employee e[]=new Employee[n];
        for(int i=o;i<n;i++)
        {
            e[i]=new Employee();
            e[i].read();
        }
        System.out.println("EID"\t"NAME"\t"SALARY \n");
        for(int i=0;i<n;i++)
        {
            e[i].display;
        }
        System.out.println("Enter the percentage to raise salary\n");
        double per=s.nextDouble();
        for(int i=0;i<n;i++)
        {
            e[i].raisesalary;
        }
        System.out.println("salary="+salary);
         System.out.println("EID"\t"NAME"\t"SALARY \n");
        for(int i=0;i<n;i++)
        {
            e[i].display;
        }
    }
    
}