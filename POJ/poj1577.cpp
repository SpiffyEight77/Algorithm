#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char s[10010],ch;
int l;
typedef struct tree
{
    char key;
    tree *left;
    tree *right;
    tree *parent;
}tree;

tree *t = new tree;
void frontshow(tree *p)
{
    printf("%c",p->key);
    if(p->left !=NULL) frontshow(p->left);
    if(p->right!=NULL) frontshow(p->right);
}

void insert(tree **root,char key)
{
    tree *p = new tree;
    p->key=key;
    p->left=p->parent=p->right=NULL;
    if(*root == NULL)
    {
        *root=p;
        return ;
    }
    if((*root)->left == NULL && (*root)->key > key)
    {
        p->parent=(*root);
        (*root)->left=p;
        return ;
    }
    if((*root)->right == NULL && (*root)->key < key)
    {
        p->parent=*root;
        (*root)->right=p;
        return ;
    }
    if((*root)->key>key) insert(&(*root)->left,key);
    else
    if((*root)->key<key) insert(&(*root)->right,key);
    else
    return ;
}

void create(tree **root,char *s,int l)
{
    for(int i = l-1;i >= 0; i--)
        insert(root,s[i]);
}

int main()
{
    while(scanf("%s",s)!=EOF)
    {
        l =strlen(s);
        if(s[0] == '$')
            break;
        while(1)
        {
            scanf("%c",&ch);
            if(ch >= 'A' && ch <='Z')
                s[l++] = ch;
            else
            if(ch == '*' || ch == '$')
                break;
        }
        t=NULL;
        create(&t,s,l);
        frontshow(t);
        printf("\n");
        if(ch == '$')
            break;
    }
    return 0;
}