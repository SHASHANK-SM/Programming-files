#include<stdio.h>
#include<stdlib.h>
void findreplace(char *txt,char *pat,char *rep)
{
    char ans[80];
    int i,j,k=0,l,found=0;
    for(i=0;txt[i]!='\0';i++)
    {
        found=0;
        for(j=0;pat[j]!='\0';j++)
        {
            if(txt[i+j]!=pat[j])
                break;
        }
            if(pat[j]=='\0')
            {
                found=1;
                for(l=0;rep[l]!='\0';l++)
                {
                    ans[k++]=rep[l];
                }
                i=i+j-1;
            }
            else
            {
                ans[k++]=txt[i];
            }
        }
        ans[k]='\0';
        if(found==1)
        {
            printf("Pattern found in text\n");
        }
        else
        {
           printf("The resultant string is \n %s\n",ans);
        }
}
int main()
{
    char txt[80],pat[20],rep[20];
    printf("Enter the text\n");
    gets(txt);
    printf("Enter the pattern\n");
    gets(pat);
    printf("Enter the Replaced string\n");
    gets(rep);
    findreplace(txt,pat,rep);
    return 0;
}