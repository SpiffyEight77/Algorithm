#include<cstdio>
#include<iostream>
#define len 1010
using namespace std;

typedef struct seqlist
{
    int data[len];
    int length;
}seqlist;

int x;

seqlist *insert(seqlist *p,int pos)
{
    for(int i = p->length-1; i >= pos; i--)
        p->data[i+1] = p->data[i];
    scanf("%d",&p->data[pos]);
    p->length++;
    return p;
}

seqlist *del(seqlist *p,int pos)
{
    for(int i = pos; i < p->length-1; i++)
        p->data[i] = p->data[i+1];
    p->length--;
    return p;
}

void edit(seqlist *p,int pos)
{
    scanf("%d",&x);
    p->data[pos] = x;
}

int search(seqlist *p,int pos)
{
    return p->data[pos];
}

int main()
{
    int n,pos;
    while(scanf("%d",&n)!=EOF)
    {
        seqlist *p,s;
        p=&s;
        p->length = n;
        for(int i = 0; i < p->length; i++)
            scanf("%d",&p->data[i]);
        scanf("%d",&pos);
        p = insert(p,pos);
        for(int i = 0; i < p->length; i++)
            printf("%d ",p->data[i]);
        printf("\n");
        p = del(p,pos);
        for(int i = 0; i < p->length; i++)
            printf("%d ",p->data[i]);
                printf("\n");
        edit(p,pos);
        for(int i = 0; i < p->length; i++)
            printf("%d ",p->data[i]);
                printf("\n");
        printf("%d\n",search(p,pos));
    }
    return 0;
}