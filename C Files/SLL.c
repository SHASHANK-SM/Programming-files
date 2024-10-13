#include<stdio.h>
#include<stdlib.h>
struct SLL
{
    int sem;
    char usn[11],name[20],branch[10],phone[10];
    struct SLL *next;
};
typedef struct SLL node;
node *start=NULL;
node *getnode()
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the student details usn\tname\tbranch\tsem\tphone\n");
    scanf("%s",newnode->usn);
    scanf("%s",newnode->name);
    scanf("%s",newnode->branch);
    fflush(stdin);
    scanf("%d",newnode->sem);
    scanf("%s",newnode->phone);
    newnode->next=NULL;
    return newnode;
}
void insertbegin()
{
    node *newnode;
    newnode=getnode();
    if(start==NULL)
    {
        start=newnode;
    }
    newnode->next=start;
    start=newnode;
}
void insertend()
{
    node *newnode,*temp;
    newnode=getnode();
    if(start==NULL)
    {
        start=newnode;
    }
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void deletebegin()
{
    node *temp=start;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    printf("Deleted node is %s\n",temp->usn);
    start=temp->next;
    free(temp);
}
void display()
{
    int count=0;
    node *temp=start;
    if(start==NULL)
    {
        printf("LIst is empty\n");
    }
    printf("List elements are \n");
     while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("count=%d\n",count);
}
void deleteend()
{
    node *temp=start,*prev;
    if(start==NULL)
    {
        printf("LIst is empty\n");
    }
    if(start->next=NULL)
    {
        printf("Deleted node is %s\n",temp->usn);
        start=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
    prev->next=NULL;
    printf("Deleted node is %s\n",temp->usn);
    free(temp);
    }
}
int main()
{
    int choice,i,n;
    while (1)
    {
        printf("Enter your choice\n1for insertbegin\n2 for insertend\n3 for deletebegin\n4 for deleteend\n5 for display\n6 for exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the no of students :");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        insertbegin();
                    }
                    break;
            case 2:insertend();
                    break;
            case 3 :deletebegin();
                    break;
            case 4:deleteend();
                    break;
            case 5:display();
                    break;
            case 6 :exit(0);
            default:printf("Invalid choice \n");
                        exit(0);

        }
    }
    
}
