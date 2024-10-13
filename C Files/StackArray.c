#include<stdio.h>
#include<stdlib.h>
int *stack,top=-1,max;
void push(int ele)
{
    if(top==max-1)
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top]=ele;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        return(stack[top--]);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack elements are");
        for(i=top;i>=0;i--)
        {
            printf("%d  ",stack[i]);
        }
    }
}
void palindrome()
{
    int num,rem,ncopy;
    printf("Enter the value of number:");
    scanf("%d",&num);
    ncopy=num;
    top=-1;
   int  rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(ncopy==rev)
    {
        printf("num is palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    
}
int main()
{
    int choice,ele;
    printf("Enter the size of stack :");
    scanf("%d",&max);
    stack=(int*)malloc(max*sizeof(int*));
    while(1)
    {
        printf("1 for push\n2 for pop\n3 for display\n4 for palindrome\n 5 for exit");
        printf("\n Enter choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:printf("Enter the element to be inserted :");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2:ele=pop();
                    if(ele!=-1)
                    {
                        printf("Deleted element is %d\n",ele);
                    }
                    break;
            case 3:display();
                    break;
            case 4: palindrome();
                    break;
            case 5 :exit(0);
            default:printf("Invalid choice\n");
                    exit(0);

        }
    }
}