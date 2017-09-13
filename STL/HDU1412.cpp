#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<set>
#include<algorithm>
using namespace std;
int n,m,x;
bool f;
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        f = 1;
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&x);
            s.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d",&x);
            s.insert(x);
        }
        set<int>::iterator it;
        for (it = s.begin(); it!=s.end(); it++)
            if(f)
            {
                f = 0;
                cout<<*it;
            }
            else
                cout<<" "<<*it;
        cout<<endl;
    }
    return 0;
}