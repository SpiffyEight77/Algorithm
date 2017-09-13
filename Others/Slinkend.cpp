#include<cstdio>
#include<iostream>
using namespace std;

typedef struct link
{
    int data;
    link *next;
}link;

link *Link = new link;

void back_create(link **p,int n)
{
    link *t;
    t = *p;
    for(int i = 0; i < n; i++)
    {
        link *s = new link;
        scanf("%d",&s->data);
        t->next = s;
        t = s;
    }
    t->next = *p; 
    //printf("%d ",t->next->data);//循环链表(尾插法)
    //t->next =NULL;
}

void front_create(link **p,int n)
{
    link *h,*t;
    h = *p;
    for(int i = 0; i < n; i++)
    {
        link *s = new link;
        scanf("%d",&s->data);
        s->next = h->next;
        h->next = s;
        /*if(s->next == NULL)
            s->next = *p;*/   //循环链表(头插法)
    }
}

void insert(link **p,int pos)
{
    link *h;
    link *s = new link;
    h = *p;
    for(int i = 0; i < pos; i++)
        h = h->next;
    scanf("%d",&s->data);
    s->next = h->next;
    h->next = s;
}

void Delete(link **p,int pos)
{
    link *h,*s;
    h = *p;
    for(int i = 0; i < pos; i++)
        h = h->next;
    s = h->next;
    h->next = s->next;
    free(s);
}

void display(link *p)
{
    for(p = Link->next; p!=NULL; p=p->next)
            printf("%d ",p->data);
}

int main()
{
    int n,pos;
    while(scanf("%d",&n)!=EOF)
    {
        link *p;
        Link->next = NULL;
        back_create(&Link,n);
        //front_create(&Link,n);
        display(Link);

        scanf("%d",&pos);
        insert(&Link,pos);
        display(Link);

        scanf("%d",&pos);
        Delete(&Link,pos);

        display(Link);
    }
    return 0;
}


