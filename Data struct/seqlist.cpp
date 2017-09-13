#include<cstdio>
#include<iostream>
#define maxn 1010
using namespace std;

typedef struct seqlist //定义seqlist结构体
{
    int length;
    int list[maxn];
}seqlist;

seqlist *p; //定义seqlist结构体类型 指针

void create()
{
    for(int i = 0; i < p->length; i++)
        scanf("%d",&p->list[i]);
}

void insert()
{
    int pos,x;
    scanf("%d",&pos);
    scanf("%d",&x);
    for(int i = p->length-1; i >= pos; i--)
        p->list[i+1] = p->list[i];
    p->list[pos] = x;
    p->length++;
}

void Delete()
{
    int pos;
    scanf("%d",&pos);
    for(int i = pos; i < p->length; i++)
        p->list[i] = p->list[i+1];
    p->length--;
}

void display()
{
    for(int i = 0; i < p->length; i++)
        printf("%d ",p->list[i]);
    printf("\n");
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        seqlist L; //定义数组L
        p = &L; //指针指向数组首地址
        p->length = n;
        create();
        //display();
        insert();
        //display();
        Delete();
        //display();
    }
    return 0;
}