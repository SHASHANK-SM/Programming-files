#include<stdio.h>
#include<math.h>
void sieve(int n)
{
    int p,a[n+1],i,j;
    for(p=2;p<=n;p++)
    {
        a[p]=p;
    }
    for(p=2;p<=floor(sqrt(n));p++)
    {
        if(a[p]!=0)
        {
            j=p*p;
            while(j<=n)
            {
                a[j]=0;
                j=j+p;
            }
        }
    }
    printf("Prime numbers are");
    for(p=2;p<=n;p++)
    {
        if(a[p]!=0)
        {
            printf("%d\t",a[p]);
        }
    }
}
void main()
{
    int n;
    printf("Enter positive number: ");
    scanf("%d",&n);
    sieve(n);
}