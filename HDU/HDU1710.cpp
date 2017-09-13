#include<cstdio>
#include<iostream>
#define len 1010
using namespace std;

int a[len],b[len];

typedef struct tree
{
    int key;
    tree *lc;
    tree *rc;
}tree;

tree *t = new tree;

tree* create(int *a,int *b,int k)
{
    tree *tt;
    for(int i = 0; i < k; i++)
    {
        if(a[0] == b[i])
        {
            tt = new tree;
            tt->key=b[i];
            tt->lc=create(a+1,b,i);
            tt->rc=create(a+i+1,b+i+1,k-i-1);
            return tt;
        }
    }
    return NULL;
}

void endshow(tree *p)
{
    if(p->lc!=NULL) endshow(p->lc);
    if(p->rc!=NULL) endshow(p->rc);
    if(p == t)
        printf("%d\n",t->key);
    else
        printf("%d ",p->key);
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        t = NULL;
        for(int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for(int i = 0; i < n; i++)
            scanf("%d",&b[i]);
        t = create(a,b,n);
        endshow(t);
    }
    return 0;
}