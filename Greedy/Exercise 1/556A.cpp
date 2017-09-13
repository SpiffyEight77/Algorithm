#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 200010;
int n,cnt0,cnt1;
char s[M];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        scanf("%s",s);
        cnt0 = 0; cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1') cnt1 ++;
            else cnt0 ++;
        }
        printf("%d\n",n - 2 * min(cnt0,cnt1));
    }
    return 0;
}