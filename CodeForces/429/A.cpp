#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int M = 10010;
int n,m,k,a[26];
char s[M];
bool f;
int main()
{
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        memset(a,0,sizeof(a));
        f = true;
        getchar();
        scanf("%s",s);
        for (int i = 0; i < n; i++)
            a[s[i] - 'a'] ++;
        for (int i = 0; i < 26; i++)
            if(a[i] >= 2 && a[i] > k)
            {
                printf("NO\n");
                f = false;
                break;
            }
        if(f)
            printf("YES\n");
    }
    return 0;
}