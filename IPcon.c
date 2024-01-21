#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[20];
int top=-1;
void push(char sym)
{
    stack[++top]=sym;
}
char pop()
{
    return(stack[top--]);
}
int prec(char sym)
{
    switch(sym)
    {
        case '^':return 4;
        case '$':return 4;
                    
        case '*':return 3;
        case '/':return 3;
        case '%':return 3;
                    
        case '+': return 2;
        case '-': return 2;
                   
        case '(':return 1;
        case '#':return 1;
        case ')':return 1;
                    
        default:
                printf("Invalid sym");
                exit(0);
    }
    return -1;
}
void convertip(char *infix,char *postfix)
{
    char sym;
    int i,j=0;
    push('#');
    for(i=0;i<strlen(infix);i++)
    {
        sym=infix[i];
        switch(sym)
        {
            case '$':
            case '*':
            case '/':
            case '+':
            case '-':
            case '(':
            case '#':
                        push(sym);
                        break;
            case ')':
                        while(stack[top]!='(')
                        {
                            postfix[j++]=pop();
                            pop();
                            break;
                        }
            case '^':
                        while(prec(sym)<=prec(stack[top]))
                        {
                           postfix[j++]=pop();
                            push(sym);
                            break;  
                        }
            default:
                    postfix[j++]=sym;            
        }
    }
    while(stack[top]!='#')
    {
        postfix[j++]=pop();
        postfix[j]='\0';
    }
}
void main()
{
    char infix[20],postfix[20];
    printf("Enter the infix expression\n");
    gets(infix);
    convertip(infix,postfix);
    printf("Postfix conversion expression is %s: ",postfix);
}
