#include<stdio.h>
#include<stdlib.h>
struct Calendar
{
    char *name,*Description;
    int Day,d[7];
};
typedef struct Calendar cal;
cal* create()
{
    return(cal*)malloc(7*sizeof(cal));
}
void read(cal *d)
{
    int i,flag;
    char temp[20],temp2[20];
    for(i=0;i<7;i++)
    {
        d[i].name=NULL;
        d[i].Day=-1;
        d[i].Description=NULL;
    }
    do
    {
        printf("Enter the day number\n");
        scanf("%d",&i);
        if(i<0||i>6)
        {
            printf("Invalid day number");
        }
        else
        {
            d[i].Day=i;
            printf("Enter the day name,description\n");
            scanf("%s%s",temp,temp2);
            d[i].name=strdup(temp);
            d[i].Description=strdup(temp2);
        }
        printf("Enter 1 for more activities else 0\n");
        scanf("%d",&flag);
    } while (flag!=0);    
}
void display(cal *d)
{
    printf("Day name\tday number\tdescriptio\n");
    for(int i=0;i<7;i++)
        {
            if(d[i].Day!=-1){
                printf("%s\t    %d\t%s\n",d[i].name,d[i].Day,d[i].Description);
        }
    }
}

void Deallocate(cal *d)
{
    for(int i=0;i<7;i++)
    {
        free(d[i].name);
        free(d[i].Description);
    }
    free(d);
}
int main()
{
    cal *d=create();
    read(d);
    display(d);
    Deallocate(d);
    return 0;
}