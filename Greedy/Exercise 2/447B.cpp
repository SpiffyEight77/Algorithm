#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 11000;
char s[M];
int l,k,ans,maxn,a[27];
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        scanf("%d",&k);
        for (int i = 0; i < 26; i++)
            scanf("%d",&a[i]);
        l = strlen(s);
        ans = 0; maxn = 0;
        for (int i = 0; i < l; i++)
            ans+=a[(s[i] - 'a')] * (i+1);
        for (int i = 0; i < 26; i++)
            if(a[i] > maxn)
                maxn = a[i];
        for (int i = l+1; i <= l+k; i++)
            ans+= i * maxn;
        printf("%d\n",ans);
    }
    return 0;
}