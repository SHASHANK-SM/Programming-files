import java.util.Scanner;
class Discount2
{
    public static void main(String args[]) 
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the total cost\n");
        double cost=s.nextDouble();
        if(cost<=2000)
        {
            cost=cost-0.05*cost;
        }
        else if(cost<=5000)
        {
            cost=cost-0.25*cost;
        }
        else if(cost>=5000&&cost<=10000)
        {
            cost=cost-0.35*cost;
        }
        else if(cost>=10000)
        {
            cost=cost-0.50*cost;
        }
        else
        {
            System.out.println("purchase it first kiddddooo");
        }
        System.out.println("Tottal cost according to Discount is :"+cost);
    }
}