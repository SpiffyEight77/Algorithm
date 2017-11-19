#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100100;
int row[Maxn],col[Maxn],x,y,n,m;
long long xx,yy;
bool f;
int main()
{
    while(cin>>n>>m)
    {
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        xx = n;
        yy = n;
        while(m--)
        {
            cin>>x>>y;
            if(!row[x])
            {
                row[x] = 1;
                xx --;
            }
            if(!col[y])
            {
                col[y] = 1;
                yy --;
            }
            cout<<xx*yy<<" ";
        }
        cout<<endl;
    }
    return 0;
}