#include<stdio.h>
#include<stdlib.h>
void unique(int n,int a[10])
{
    int i,j;
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
            {
                printf("Elements are Unique\n");
                return;
            }
        }
    }
}
void main()
{
    int n,a[10],i;
    printf("Enter the size of n");
    scanf("%d",&n); 
    printf("Enter array elments : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" array elments are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    unique(n,a);
}