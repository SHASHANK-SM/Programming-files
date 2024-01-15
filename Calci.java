import java.util.Scanner;
class Calci
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a and b\n");
        int a=s.nextInt();
        int b=s.nextInt();
        int res=0;
        System.out.println("Enter the operator\n");
        char op=s.next().charAt(0);
        switch(op)
        {
            
            case '+':res=a+b;
                        break;
             case '-':res=a-b;
                        break;
            case '/':res=a/b;
                        break;
            case '%':res=a%b;
                        break;
            case '*':res=a*b;
                        break;
            default:System.out.println("Invalid operator\n");
                    System.exit(0);
                    
        }
        System.out.println("result="+res);

    }
}