#include<iostream>
#define M 100010
using namespace std;
int n,m,k,a[M],b[M];
long long cnt;
void _merge(int l,int mid,int r)
{
    int p1 = l, p2 = mid + 1;
    //printf("l = %d mid = %d r = %d\n",l,mid,r);
    for (int i = p1; i <= r; i++)
    {
        if((p1 <= mid) && ((p2 > r) || (a[p1]) <= a[p2]) )
        {
            b[i] = a[p1];
            p1++;
        }
        else
        {
            b[i] = a[p2];
            p2++;
            cnt += mid - p1 + 1;
        }
    }
    for (int i = l; i <= r; i++)
        a[i] = b[i];
        //printf("a[%d] = %d\n",i,a[i]);
}
void erfen(int l, int r)
{
    int mid = (l + r) >> 1;
    //printf("mid = %d\n",mid);    
    if(l < r)
    {
        erfen(l,mid);
        erfen(mid + 1,r);
    }
    _merge(l,mid,r);
}
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        for (int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        cnt = 0;
        erfen(1,n);
        //for (int i = 1; i <= n; i++)
            //printf("%d ",a[i]);
        if(cnt > k)
            printf("%lld\n",cnt - k);
        else
            printf("0\n");
    }
    return 0;
}