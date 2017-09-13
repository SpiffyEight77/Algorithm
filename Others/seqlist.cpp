#include<cstdio>
#include<iostream>
#define maxn 10010
using namespace std;

struct stu
{
   int no;
   char name[10];
   char sex[10];
   int age;
};

typedef struct seqlist
{
   struct stu list[maxn];
   int length;
}seqlist;

void insert(seqlist *p,int pos,seqlist *x)
{
   for(int i=p->length-1;i>=pos;i--)
    p->list[i+1]=p->list[i];
    p->list[pos]=x->list[pos];
    p->length++;
}

int main()
{
    int pos;
    seqlist s,t,*p,*x;
    p=&s;
    x=&t;
    cin>>p->length>>pos;
    scanf("%d %s %s %d",&x->list[pos].no,x->list[pos].name,x->list[pos].sex,&x->list[pos].age);
    for(int i=0;i<p->length;i++)
        scanf("%d %s %s %d",&p->list[i].no,p->list[i].name,p->list[i].sex,&p->list[i].age);
    printf("\n");
    insert(p,pos,x);
    for(int i=0;i<p->length;i++)
     printf("%d %s %s %d\n",p->list[i].no,p->list[i].name,p->list[i].sex,p->list[i].age);
     printf("\n");
    return 0;
}