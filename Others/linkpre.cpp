#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct Node
{
    struct Node *next;
    int data;
}link;

link* create(int n)
{
    link *p,*s,*h;
    h=(link*)malloc(sizeof(Node));
    h->next = NULL;
    for(int i = 0; i < n; i++)
    {
       s = (link*)malloc(sizeof(Node));
       scanf("%d",&s->data);
       s->next = h->next;
       h->next = s;
    }
    return h;
}

void insert(link *h)
{
    link *p,*s;
    int P;
    printf("please input insert position: ");
    scanf("%d",&P);
    p=h;
    for(int i = 0; i < P; i++)
       p=p->next;
    s = (link*)malloc(sizeof(Node));
    scanf("%d",&s->data);
    s->next=p->next;
    p->next=s;
}

void del(link *h)
{
    link *p,*s;
    int P;
    printf("please input delete position: ");
    scanf("%d",&P);
    p=h;
    for(int i = 0; i < P; i++)
       p=p->next;
    s = (link*)malloc(sizeof(Node));
    s = p->next;
    p->next = s->next;
    free(s);
}

int main()
{
    link *p,*h,*s;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        h = create(n);
        //printf("h = %d\n",h->data);
        for(p = h->next; p != NULL; p=p->next)
            printf("%d ",p->data);
        printf("\n");

        insert(h);
        for(p = h->next; p != NULL; p=p->next)
            printf("%d ",p->data);
        printf("\n");

        del(h);
        for(p = h->next; p != NULL; p=p->next)
            printf("%d ",p->data);
        printf("\n");
    }
    return 0;
}
