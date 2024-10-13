#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int top=-1;
int stack[20];
void push(int ele)
{
    stack[++top]=ele;
}
float pop()
{
    return (stack[top--]);
}
void Evaluate(char postfix[50])
{
    int i;
    char sym;
    float op1,op2,result;
    for(i=0;i<strlen(postfix);i++)
    {
        sym=postfix[i];
        if(isdigit(sym))
        {
            push(sym-'0');
        }
        else
        {
            op2=pop();
            op1=pop();
            switch(sym)
            {
                case '+':push(op1+op2);
                            break;
                case '-':push(op1-op2);
                            break;
                case '*':push(op1*op2);
                            break;
                case '/':push(op1/op2);
                            break;
                case '^':push(pow(op1,op2));
                            break;
                default:
                        printf("invalid symbol");
                        exit(0);
                
            }
        
        
    }
    int result=(int)pop();
    printf("%d",result);
}
}
int main()
{
    char postfix[50];
    printf("Enter the postfix expression :");
    gets(postfix);
    Evaluate(postfix);
    return 0;
}