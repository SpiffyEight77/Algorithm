#include<cstdio>
#include<iostream>
using namespace std;

int n;

typedef struct Dlink
{
    int data;
    Dlink *prior;
    Dlink *next;
}Dlink;


Dlink *dlink = new Dlink;

void front_create(Dlink **p,int n)
{
    
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        dlink->prior = dlink->next = NULL;
        front_create(&dlink,n);        
    }
    return 0;
}