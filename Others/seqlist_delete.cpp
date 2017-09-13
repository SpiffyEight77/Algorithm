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

void insert(seqlist *p,int pos)
{
   for(int i=pos;i<p->length;i++)
    p->list[i]=p->list[i+1];
    p->length--;
}

int main()
{
    int pos;
    seqlist s,*p;
    p=&s;
    cin>>p->length>>pos;
    for(int i=0;i<p->length;i++)
        scanf("%d %s %s %d",&p->list[i].no,p->list[i].name,p->list[i].sex,&p->list[i].age);
    printf("\n");
    insert(p,pos);
    for(int i=0;i<p->length;i++)
     printf("%d %s %s %d\n",p->list[i].no,p->list[i].name,p->list[i].sex,p->list[i].age);
    return 0;
}