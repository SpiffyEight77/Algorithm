#include<cstdio>
#include<iostream>
#define len 1010
using namespace std;

int minheap[len];
int hlength;

void down(int p)
{
    int q = p * 2;
    int a = minheap[p];
    while(q <= hlength)
    {
        if(q < hlength && minheap[q] > minheap[q+1])
            q++;
        if(minheap[q] >= a) break;
        else
        {
            minheap[p] = minheap[q];
            p = q;
            q = p * 2;
        }
    }
    minheap[p] = a;
}

int main()
{
    while(scanf("%d",&hlength)!=EOF)
    {
        for(int i = 1; i <= hlength; i++)
            scanf("%d",&minheap[i]);
        for(int i = hlength/2; i > 0; i--)
            down(i);
        for(int i = 1; i <= hlength; i++)
            printf("%d ",minheap[i]);
        printf("\n");
    }
    return 0;    
}