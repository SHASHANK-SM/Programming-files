#include<stdio.h>
void search(int a[],int n)
{
    int i,low=0,high=n-1,mid=0,key;
    printf("enter the key to search :");
    scanf("%d",key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("key found at positioon %d",mid+1);
            return;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else 
        {
            high=mid-1;
        }
    }
        printf("key not found\n");
}
int main()
{
    int i,a[10],n;
    printf("Enter array size :");
    scanf("%d",&n);
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    search(a,n);
}