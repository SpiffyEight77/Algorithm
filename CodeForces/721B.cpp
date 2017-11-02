#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[110],n,k,cnt1,cnt2,l;
string p,S;
int main()
{
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        cnt1 = 0;
        cnt2 = 0;
        memset(a,0,sizeof(a));
        for (int i = 0; i < n; i++)
        {
            cin>>S;
            a[S.size()]++;
        }
        cin>>p;
        l = p.size();
        for (int i = 1; i < l; i++)
                cnt1+=a[i];
        cout<<cnt1 + cnt1 / k * 5 + 1<<" "<<cnt1 + a[l] + (cnt1 + a[l] - 1) / k * 5<<endl;
    }
    return 0;
}