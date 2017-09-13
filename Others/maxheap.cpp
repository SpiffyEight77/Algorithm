#include<cstdio>
#include<iostream>
#define len 1010
using namespace std;

int maxheap[len];
int hlength;

void down(int p)
{
    int q = p * 2;
    int t = maxheap[p];

    while(q <= hlength)
    {
        if(q < hlength && maxheap[q] < maxheap[q+1])
            q++;
        if(maxheap[q] <= t) break;
        else
        {
            maxheap[p] = maxheap[q];
            p = q;
            q = p * 2;
        }
    }
    maxheap[p] = t;
}

void up(int p)
{
    int q = p/2;
    int t = maxheap[p];
    while(q >= 1 && t > maxheap[q])
    {
        maxheap[p] = maxheap[q];
        maxheap[q] = t;
        p = q;
        q = p/2; 
    }
}

void insert(int x)
{
    maxheap[++hlength] = x;
    up(hlength);
}

int getmax()
{
    int t = maxheap[1];
    maxheap[1] = maxheap[hlength--];
    down(1);
    return t;
}

int main()
{
    while(scanf("%d",&hlength)!=EOF)
    {
        for(int i = 1; i <= hlength; i++)
            scanf("%d",&maxheap[i]);
        for(int i = hlength/2; i >= 1; i--)
            down(i);
        for(int i = 1; i <= hlength; i++)
            printf("%d ",maxheap[i]);
        printf("\n");

        insert(9);
        for(int i = 1; i <= hlength; i++)
            printf("%d ",maxheap[i]);
        printf("\n");

    
        printf("max = %d\n",getmax());
        for(int i = 1; i <= hlength; i++)
            printf("%d ",maxheap[i]);
        printf("\n");
    }
    return 0;
}