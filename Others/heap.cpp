#include<cstdio>
#include<iostream>
#include<algorithm>
#define len 1010
using namespace std;

int heap[len];
int hlength;

void maxdown(int p)//自上到下维护
{
    int q = p * 2;
    int t = heap[p];

    while(q <= hlength)
    {
        if(q < hlength && heap[q] < heap[q+1])
            q++;
        if(heap[q] <= t) break;
        else
        {
            heap[p] = heap[q];
            p = q;
            q*=2;
        }
    }
    heap[p] = t;
}

void mindown(int p)
{
    int q = p * 2;
    int t = heap[p];

    while(q <= hlength)
    {
        if(q < hlength && heap[q] > heap[q+1])
            q++;
        if(heap[q] >= t) break;
        else
        {
            heap[p] = heap[q];
            p = q;
            q*=2;
        }
    }
    heap[p] = t;
}

void maxup(int p) //自下到上维护
{
    int q = p / 2;
    int t = heap[p];
    while(q >= 1)
    {
        if(heap[q] >= t) break;
        else
        {
            heap[p] = heap[q];
            heap[q] = t;
            p = q;
            q /= 2;
        }
    }
}

void downup(int p)
{
    int q = p / 2;
    int t = heap[p];
    while(q >= 1)
    {
        if(heap[q] <= t) break;
        else
        {
            heap[p] = heap[q];
            heap[q] = t;
            p = q;
            q /= 2;
        }
    }
}

void maxinsert()   //在堆最底部最靠左的位置插入值
{
    int x;
    scanf("%d",&x);
    heap[++hlength] = x;
    maxup(hlength); //自下到上维护
}

void mininsert()
{
    int x;
    scanf("%d",&x);
    heap[++hlength] = x;
    downup(hlength);
}

int getmax()                //返回最大值 自上到下维护
{
    int t = heap[1];
    heap[1] = heap[hlength--];
    maxdown(1);
    return t;
}

int getmin()
{
    int t = heap[1];
    heap[1] = heap[hlength--];
    mindown(1);
    return t;
}

void display()
{
    for(int i = 1; i <= hlength; i++)
        printf("%d ",heap[i]);
    printf("\n");
}

int main()
{
    while(scanf("%d",&hlength)!=EOF)
    {
        for(int i = 1; i <=hlength; i++)
            scanf("%d",&heap[i]);

        /*for(int i = hlength/2; i > 0; i--)
            maxdown(i);
        display();

        maxinsert();
        display();

        printf("max = %d\n",getmax());
        display();*/

        for(int i = hlength/2; i > 0; i--)
            mindown(i);
        display();

        mininsert();
        display();

        printf("min = %d\n",getmin());
        display();
    }
    return 0;
}