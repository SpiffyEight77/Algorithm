#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define Maxn 1000010
using namespace std;
int n,m;
struct nginx{
    char name[20];
    int a,b,c,d;
}ng[1010];

struct nginx2{
    char com[20];
    int x,y,z,w;
}ng2[1010];

int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        scanf("%s %d.%d.%d.%d",ng[i].name,&ng[i].a,&ng[i].b,&ng[i].c,&ng[i].d);
    for (int i = 0; i < m; i++)
    {
        scanf("%s %d.%d.%d.%d;",ng2[i].com,&ng2[i].x,&ng2[i].y,&ng2[i].z,&ng2[i].w);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( ng2[i].x == ng[j].a && ng2[i].y == ng[j].b && ng2[i].z == ng[j].c && ng2[i].w == ng[j].d)
            {
                cout<<ng2[i].com<<" "<<ng2[i].x<<"."<<ng2[i].y<<"."<<ng2[i].z<<"."<<ng2[i].w<<";"<<" #"<<ng[j].name<<endl;
                break;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    //     cout<<name[i]<<" "<<ip[i]<<endl;
    return 0;
}