#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 1010
using namespace std;

char s[88];

void solve(char *a)
{
    int l = strlen(a);
    int c = 0;
    int sum =0;
    for(int i = 0; i < l; i++)
    {
        if(a[i] == 'O')
        {
            c++;
            sum+=c;
        }
        else
        c = 0;
    }
    printf("%d\n",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        scanf("%s",s);
        solve(s);
    }
    return 0;
}