import java.util.Scanner;
class Addmatrix
{
	public static void main(String args[])
	{
		int n=Integer.parseInt(args[0]);
		int a[][]=new int[n][n];
		int b[][]=new int[n][n];
		int c[][]=new int[n][n];
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the elements of MATRIX A\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=s.nextInt();
			}
		}
		System.out.println("Enter the elements of MATRIX B\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				b[i][j]=s.nextInt();
			}
		}
		System.out.println("Addition of two matrices is:\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				System.out.print(c[i][j]+" "+"\n");
			}
		}
		System.out.println("\n");
	}
}