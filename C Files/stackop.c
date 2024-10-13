#include<stdio.h>
#include<stdlib.h>
void main()
{
    int top=-1,ele,stack[5];
    
}
void push()
{
    int size,stack[5],ele,top=-1;
    printf("Enetr the array size\n");
    scanf("%d",&size);
     printf("Enetr the element\n");
    scanf("%d",&ele);

    if(top==size-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("pushed element is %d \n",stack[top]);
    }
}
    void pop()
    {
        int item,top,stack[5],ele,size;
        printf("enter the position to be pop\n");
        scanf("%d",&top);
        if(top==-1)
        {
            printf("under flow");
        }
        else
        {
           item=stack[top];
           top--;
           printf("poped element is %d\n",item); 
        }
    }
        void peek()
        {
            int stack[5],top;
            if(top==-1)
            {
                printf("stack is empty");
            }
            else
            {
                printf("topmost item of stack is %d\n",stack[top]);
            }
        }
            void display()
            { 
               int size,stack[5],ele,top;
            if(top==-1)
            {
                printf("stack is empty");
            } 
            else{
                for(top=0;top>0;top++)
                {
                    printf("%d",stack[top]);
                }
            }
                
            }
            void push();
    void pop();
    void peek();
    void display();
    