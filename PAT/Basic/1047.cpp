#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
struct team
{
    int sum;
}t[Maxn];
int p,ans,n,score,num,mem;
int main()
{
    cin>>n;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d-%d %d",&num,&mem,&score);
        t[num].sum+=score;
        if(t[num].sum > ans)
            ans = t[num].sum,p = num;
    }
    cout<<p<<" "<<t[p].sum<<endl;
    return 0;
}