#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct stu
{
    char name[22];
    int num;
    int score;
}s[1100];
int n,m,g,x,c,score[11];
bool cmp(stu x,stu y)
{
    if(x.score == y.score)
        return strcmp(x.name,y.name) > 0 ? 0 : 1;
    return x.score > y.score;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        if(n == 0)
            break;
        scanf("%d%d",&m,&g);
        c = 0;
        memset(s,0,sizeof(s));
        for(int i = 1; i <= m; i++)
            scanf("%d",&score[i]);
        for(int i  = 1; i <= n; i++)
        {
            scanf("%s %d",s[i].name,&s[i].num);
            for(int j = 1; j <= s[i].num; j++)
            {
                scanf("%d",&x);
                s[i].score += score[x];
            }
            if(s[i].score >= g)
                c++;
        }
        sort(s+1,s+n+1,cmp);
        printf("%d\n",c);
        for(int i = 1; i <= n; i++)
            if(s[i].score >= g)
                printf("%s %d\n",s[i].name,s[i].score);
            else
                break;
    }
    return 0;
}