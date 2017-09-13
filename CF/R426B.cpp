#include<iostream>
#include<cstring>
#define M 1000010
using namespace std;
int l,n,k,m,a[27];
bool f[27];
char s[M];
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        getchar();
        m = 0;
        memset(a,0,sizeof(a));
        memset(f,1,sizeof(f));
        for(int i = 0; i < n; i++)
        {
            scanf("%c",&s[i]);
            a[s[i]-'A']++;
        }
        for(int i = 0; i < n; i++)
        {
            if(f[s[i] - 'A'])
            {
                m++;
                f[s[i] - 'A'] = false;
            }
            if(m > k)
            {
                printf("YES\n");
                break;
            }
            a[s[i]-'A']--;
            if(a[s[i]-'A'] == 0)
                m--;
        }
        if(m <= k)
            printf("NO\n");
    }
    return 0;
}