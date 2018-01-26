#include<cstdio>
#include<iostream>
#include<vector>
#define Maxn 100010 
using namespace std;
int n,a,b,c,q,k,xx,yy;
vector<pair<int,int> > tree[Maxn];
long long depth[Maxn];
void dfs(int x,int y)
{
    for (int i = 0; i < tree[x].size(); i++)
    {
        if(tree[x][i].first  == y)
            continue;
        depth[tree[x][i].first] = depth[x] + tree[x][i].second;
        dfs(tree[x][i].first,x); 
    }
}
int main()
{
    cin>>n;
    for (int i = 0; i < n - 1; i++)
    {
        cin>>a>>b>>c;
        tree[a].push_back(make_pair(b,c));
        tree[b].push_back(make_pair(a,c));
    }

    // for (int i = 0; i < tree[0].size(); i++)
    //     cout<<tree[0][i].first<<" "<<tree[0][i].second<<endl;

    cin>>q>>k;
    dfs(k,-1);
    for (int i = 0; i < q; i++)
    {
        cin>>xx>>yy;
        cout<<depth[xx]+depth[yy]<<endl;
    }
    return 0;
}