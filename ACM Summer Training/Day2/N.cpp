#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#define M 110
using namespace std;
int T,n,num;
char g[M],p[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        memset(g,0,sizeof(g));
        memset(p,0,sizeof(p));
        map<string, map<string,int> > mp;
        map<string, map<string,int> >::iterator it;
        map<string,int> ::iterator it2;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s %s %d",g,p,&num);
            mp[p][g] += num;
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            cout<<it->first<<endl;
            for (it2 = it->second.begin(); it2 != it->second.end(); it2++)
                cout<<"   |----"<<it2->first<<"("<<it2->second<<")"<<endl;
        }
        if(T)
            printf("\n");
    }
    return 0;
}
