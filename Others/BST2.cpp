#include<cstdio>
#include<iostream>
using namespace std;

typedef struct tree
{
    int key;
    tree *left;
    tree *right;
}tree;

tree *t = new tree;

void front(tree *p)
{
    printf("%d ",p->key);
    if(p->left  != NULL) front(p->left);
    if(p->right != NULL) front(p->right);
}

void mid(tree *p)
{
    if(p->left  != NULL)  mid(p->left);
    printf("%d ",p->key);
    if(p->right != NULL) mid(p->right);
}

void back(tree *p)
{
    if(p->left  != NULL) back(p->left);
    if(p->right != NULL) back(p->right);
    printf("%d ",p->key);
}

tree * insert(tree *root,int key)
{
    if(root == NULL)
    {
        tree *p = new tree;
        p->key = key;
        p->left=p->right=NULL;
        return p;
    }
    else
    if(root->key > key) root->left = insert(root->left,key);
    else root->right = insert(root->right,key);
    return root;
}

int main()
{
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {   
        t = NULL;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&x);
            t = insert(t,x);
        }
        mid(t);
        printf("\n");
        front(t);
        printf("\n");
        back(t);
        printf("\n");
    }
    return 0;
}