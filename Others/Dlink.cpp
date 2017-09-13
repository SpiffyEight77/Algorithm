#include<cstdio>
#include<iostream>
using namespace std;

typedef struct dlink
{
    int data;
    dlink *prior;
    dlink *next;
}dlink;

dlink *Dlink = new dlink;

void front_create(dlink **p,int n)
{
    dlink *h,*t;
    h = *p;
    for(int i = 0; i<n; i++)
    {
        dlink *s = new dlink;
        scanf("%d",&s->data);
        s->next = h->next;
        h->next = s;
        s->prior =  h;
        t = s;
    }
     /*t->next = *p;
     (*p)->prior = t;*/
     //printf("%d ",(*p)->data);
     //printf("%d ",(*p)->prior->data);
}

void back_create(dlink **p,int n)
{
    dlink *h,*t;
    h = *p;
    for(int i = 0; i < n; i++)
    {
        dlink *s = new dlink;
        scanf("%d",&s->data);
        h->next = s;
        s->prior = h;
        h = s;
    }
    h->next = NULL;
    /*(*p)->prior = h;
    h->next = *p;*/
    //printf("%d ",(*p)->prior->data);
}

void insert(dlink **p,int pos)
{
    dlink *h;
    h = *p;
    for(int i = 0; i<pos; i++)
        h = h->next;
    dlink *s = new dlink;
    scanf("%d",&s->data);
    s->next = h->next;
    h->next = s;
    s->prior = h;
        //printf("%d\n",h->next->prior->data);
}

void del(dlink **p,int pos)
{
    dlink *h,*d;
    h = (*p);
    for(int i = 0; i < pos; i++)
        h = h->next;

    d = h->next;
    h->next = d->next;
    if(d->next != NULL) 
        d->next->prior = h;
   
    //printf("%d\n",h->next->prior->data);
    free(d);
}

void display(dlink **p)
{
     dlink *h;
     for(h = (*p)->next; h!=NULL; h=h->next)
            printf("%d ",h->data);
        printf("\n");
}

int main()
{
    int n,pos;
    while(scanf("%d",&n)!=EOF)
    {
        dlink *p,*k;
        Dlink->next = Dlink->prior =NULL;
        
        front_create(&Dlink,n);
        //back_create(&Dlink,n);
        display(&Dlink);

        scanf("%d",&pos);
        insert(&Dlink,pos);
        display(&Dlink);

        scanf("%d",&pos);
        del(&Dlink,pos);
        display(&Dlink);
       
    }
    return 0;
}