#include<stdio.h>
#include<string.h>
#include<malloc.h>
char metro[100],arrival,departure;
int choice;
void station()
{
    printf("Enter the metro stations\n");
    for(int i=0;i<10;i++)
    {
        scanf("%s",&metro[i]);
    }
    printf("Metro stations are  :");
    for(int i=0;i<10;i++)
    {
        printf("%s",metro[i]);
    }
    printf("Enter the station to be arrived\n");

}
void Arrival()
{
    while(1)
    {
         printf("Enter the choice :");
         printf("Enter 1 for Green line and 2 for Purple Line  :");
         scanf("%d",&choice);
         switch(choice)
         {
            case 1:
                    printf("Your Destination in Green Line --");
                    char departure;
                    printf()
                    
         }
    
    }
   
}

int main()
{
    station();
}