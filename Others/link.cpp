#include<cstdio>
#include<iostream>
using namespace std;

struct node
{
    struct node *Next;
    int date;
};

struct node * insert(int n)
{
    struct node *h;
    struct node *p;
    struct node *s;

    h=NULL;
    p=NULL;
    
    int i;

    for(i = 0; i < n; i++)
    {
        s=(struct node*) malloc(sizeof(struct node));
        scanf("%d",&s->date);
        if(h == NULL)
            h = s;
        else
            p->Next=s;
        p=s;
    }
    p->Next=NULL;
    return h;
}

int main()
{
    struct node *h,*p,*s;
    int n;
    scanf("%d",&n);
    h=insert(n);
    for(p = h; p!=NULL ; p=p->Next)
        printf("%d ",p->date);
    return 0;
}