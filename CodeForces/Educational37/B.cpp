#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define Maxn 100001
using namespace std;
int t = 1,n,leave,now,k;
struct s{
    int c;
    int l;
}stu[1100];
int main()
{
    cin>>t;
    while(t--)
    {
        memset(stu,0,sizeof(stu));
        leave = 0;
        now = 1;
        k = 1;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>stu[i].c>>stu[i].l;
            leave = max(leave,stu[i].l);
        }
       while(now <= leave)
       {
            if(stu[k].l < now)
            {
                cout<<"0 ";
                k++;
            }
            
                if(stu[k].l > now)
                {
                    cout<<now<<" ";
                    k++;
                    now++;
                }
            if(k > n)
                break;
       }
       cout<<endl;
    }
    return 0;
}