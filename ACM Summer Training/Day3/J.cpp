#include<iostream>
#include<cstdio>
#define M 5000010
using namespace std;
int n,k,a[M];
int findNum(int l,int r)
{
    if(l >= r) return a[l];
    int i = l, j = r;
    int x = a[i];
    while(i < j)
    {
        while(i < j && a[j] < x)
            j--;
        if(i < j)
            a[i++] = a[j];
        while(i < j && a[i] > x)
            i++; 
        if(i < j)
            a[j--] = a[i];
    }
    a[i] = x;
    if(i == k)
        return i;
    if(i > k) return findNum(l,i-1);
    else
        return findNum(i+1,r);
}
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        for (int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        findNum(1,n);
        printf("%d\n",a[k]);
    }
    return 0;
}