#include<cstdio>
#include<iostream>
using namespace std;

typedef struct link
{
    int data;
    link * next;
}link;

link *Link = new link;

link * create(link *p,int n)
{
    for(int i = 0; i < n; i++)
    {
        link *s = new link;
        scanf("%d",&s->data);
        s->next = p->next;
        p->next = s;
    }
    return p;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        link *h;
        Link->next = NULL;
        Link = create(Link,n);
        
        for(h = Link->next; h!=NULL; h=h->next)
            printf("%d ",h->data);
    }
    return 0;
}