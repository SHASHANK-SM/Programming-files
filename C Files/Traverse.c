#include<stdio.h>
#include<malloc.h>
struct BT
{
    int data;
    struct BT *left;
    struct BT *right;
};
typedef struct BT node;
node* createnode(int data)
    {
        node *n=(node*)malloc(sizeof(node));
        n->data=data;
        n->left=NULL;
        n->right=NULL;
        return n;
    }
    void preorder(node *root)
{
      if(root!=NULL)
        {
            printf("%d ",root->data);
            preorder(root->left);
            preorder(root->right);
        }

 }
void postorder(node *root)
{
      if(root!=NULL)
        {
            postorder(root->left);
            postorder(root->right);
            printf("%d ",root->data);
        }

 }
 void Inorder(node *root)
{
      if(root!=NULL)
        {
            Inorder(root->left);
            printf("%d ",root->data);
            Inorder(root->right);
        }

 }
int main()
{
    node *n=createnode(4);
    node *n1=createnode(5);
    node *n2=createnode(6);
    node *n3=createnode(8);
    node *n4=createnode(9);
    n->left=n1;
    n->right=n2;
    n1->left=n3;
    n1->right=n4;
    preorder(n);
    printf("\n");
    postorder(n);
    printf("\n");
    Inorder(n);
    return 0;    
}