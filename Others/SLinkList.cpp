#include<cstdio>
#include<iostream>
#define maxn 10010
#define OK 1
#define ERROR 0
#define OVERFLOW -1

typedef int Status;

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

Status InitList(LinkList &L)
{ 
    L = new LNode;
    L->next = NULL;
    return OK;
}

Status GetElem(LinkList L,int i, int &e)
{
    struct LNode *p;
    p = new LNode;
    p = L->next;
   
    return OK;
}

int main()
{

    return 0;
}