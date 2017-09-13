#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node *parent;
};

void frontshow(node *p)
{
    if(p == NULL) return ;
    printf("%d ",p->key);
    if(p->left  != NULL) frontshow(p->left);
    if(p->right != NULL) frontshow(p->right); 
}

void endshow(node *p)
{
    if(p == NULL) return ;
    if(p->left != NULL) endshow(p->left);
    if(p->right!= NULL) endshow(p->right);
    printf("%d ",p->key);
}

void midshow(node *p)
{

    if(p == NULL) return ;
    if(p->left != NULL) midshow(p->left);
    printf("%d ",p->key);
    if(p->right != NULL) midshow(p->right);
}

void insert(node ** root,int key)
{
    node *p = new node;
    p->key=key;
    p->left=p->right=p->parent=NULL;
    if(!(*root))
    {
        *root=p;
        return ;
    }

    if(!(*root)->left && (*root)->key > key)
    {
        p->parent=*root;
        (*root)->left=p;
        return ;
    }

    if(!(*root)->right && (*root)->key<key)
    {
        p->parent=*root;
        (*root)->right = p;
        return ;
    }

    if((*root)->key > key)
        insert(&(*root)->left,key);
    else
    if((*root)->key < key)
        insert(&(*root)->right,key);
    else
    return ;    
}

void create(node **root,int *a,int length)
{
    for(int i = 0; i<length; i++)
        insert(root,a[i]);
}

int main()
{
    int a[11]={15,6,18,3,7,17,20,2,4,10,9};
    //int b[9]={2,7,2,6,5,11,5,9,4};
    node *root = NULL;
    create(&root,a,11);
    midshow(root);
    printf("\n");
    frontshow(root);
    printf("\n");
    endshow(root);
    printf("\n");
    return 0;
}










/*#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct node
{
    int key;///结点值
    node *left;
    node *right;
    node *parent;///指向父亲结点的指针
};

///递归中序遍历排序二叉树
void show(node *p)
{
    if (p==NULL) return;
    if (p->left != NULL) show(p->left);
    printf("%d ",p->key);
    if (p->right != NULL) show(p->right);

}

///插入结点
void inseart(node ** root,int key)
{
    node *p=new node;
    //  node1 p=(node1)malloc(sizeof(node));
    p->key=key;
    p->left=p->right=p->parent=NULL;
    ///空树时作为根结点
    if((*root)==NULL)
    {
        *root=p;
        return;
    }
    ///插入到*root的左孩子
    // printf("%d\n",root->key);
    if((*root)->left==NULL&&(*root)->key>key)
    {
        p->parent=(*root);
        (*root)->left=p;
        return;
    }
    ///插入到*root的右孩子
    if((*root)->right==NULL&&(*root)->key<key)
    {
        p->parent=(*root);
        (*root)->right=p;
        return;
    }
    if((*root)->key>key)
        inseart(&(*root)->left,key);
    else if((*root)->key<key)
        inseart(&(*root)->right,key);
    else
        return;
}

///创建二叉排序树
void create(node **root,int *a,int length)
{
    for(int i=0; i<length; i++)
        inseart(root,a[i]);
}
///查找二叉排序树
node* search(node *root,int key)
{
    if(root==NULL)
        return NULL;
    if(key>root->key)
        return search(root->right,key);
    else if(key<root->key)
        return search(root->left,key);
    else
        return root;
}
///查找最小关键字，空树的时候返回NULL
node* searchMin(node *root)
{
    if(root==NULL)
        return NULL;
    if(root->left==NULL)
        return root;
    else
        return searchMin(root->left);
}

///查找最大关键字，空树的时候返回NULL
node* searchMax(node *root)
{
    if(root==NULL)
        return NULL;
    if(root->right==NULL)
        return root;
    else
        return searchMax(root->right);
}

///查找一个结点的前驱（排序二叉树中第一个比它的值小的结点）
node* searchPredecessor(node *p)
{
     /// 空树
     if(p==NULL)    
        return p;
     ///有左子树，左子树中最大的那个
     if(p->left)
        return searchMax(p->left);
     ///无左子树，查找某个结点的右子树，遍历完了
     else
     {
         if(p->parent==NULL)
            return NULL;
         ///向上寻找前驱
         while(p)
         {
             if(p->parent->right==p)
                  break;
             p=p->parent;
         }
         return p->parent;
     }
}

///查找每个结点的后继（排序二叉树中第一个比它的值大的结点）
node* searchSuccessor(node* p)
{
    ///空树
    if(p==NULL)
        return p;
    ///有右子树，右子树中最小的那个
    if(p->right)
        return searchMin(p->right);
    ///无右子树，查找某个结点的左子树遍历完了
    else
    {
        if(p->parent==NULL)
            return NULL;
        while(p)
        {
            if(p->parent->left==p)
                break;
            p=p->parent;
        }
        return p->parent;
    }
}

///删除结点，结点不存在返回0
int delete_node(node ** root,int key)
{
    node* q;
    node *p=search(*root,key);
    int temp;
    if(!p)
        return 0;
    ///1.被删结点是叶子结点，直接删除
    if(p->left==NULL&&p->right==NULL)
    {
        if(p->parent==NULL)
        {
            delete(p);
            (*root)=NULL;
        }
        else
        {
            if(p->parent->left==p)
                p->parent->left=NULL;
            else
                p->parent->right=NULL;
            delete(p);
        }
    }
    ///2被删除的结点只有左子树
    else if(p->left&&!(p->right))
    {
        p->left->parent=p->right;
        ///如果删除的是父结点，要改变父结点指针
        if(p->parent==NULL)
            *root=p->left;
        ///删除的父亲结点的左孩子
        else if(p->parent->left==p)
            p->parent->left=p->left;
        ///删除的父亲结点的右孩子
        else
            p->parent->right=p->left;
        delete(p);
    }
    ///3被删除的结点只有右孩子
    else if(p->right&&!(p->left))
    {
        p->right->parent=p->parent;
        ///如果删除的是父结点，要改变父结点指针
        if(p->parent==NULL)
            *root=p->right;
        ///删除的父亲结点的左孩子
        else if(p->parent->left==p)
            p->parent->left=p->right;
        ///删除的父亲结点的右孩子
        else
            p->parent->right=p->right;
        delete(p);
    }
    ///4被删除的结点既有左孩子又有右孩子
    else
    {
        q=searchSuccessor(p);
        temp=q->key;
        delete_node(root,q->key);
        p->key=temp;
    }
    return 1;
}
int main()
{
    int a[11]= {15,6,18,3,7,17,20,2,4,10,9};
    node *root = NULL;
    create(&root,a,11);
    ///遍历
    show(root);
    ///查找
    printf("%d\n",search(root,17)->key);
    ///删除
    for(int i=0; i<11; i++)
    {
        printf("%d\n",a[i]);
        delete_node(&root,a[i]);
        show(root);
        printf("\n");
    }
    return 0;
}*/
