#include<stdio.h>
int count=0;
void TowerofHoinoi(int n,char s,char t,char d)
{
    if(n==1)
    {
        printf("Move from %c to %c",s,d);
        count++;
    }
    else
    {
        TowerofHoinoi(n-1,s,d,t); 
        printf("Move from %c to %c ",s,d);
        count++;
        TowerofHoinoi(n-1,t,s,d);
    }
}
int main()
{
    int n;
    printf("Enter the number of disks :");
    scanf("%d",&n);
    TowerofHoinoi(n,'S','T','D');
    printf("Number of moves %d ",count);
    return 0;
}