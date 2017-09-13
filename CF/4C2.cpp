#include<cstdio>
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int main()
{
    char s[34];
    int n;
    map<string,int>x;
    scanf("%d",&n);
    x.clear();
    getchar();
    while(n--)
    {
        memset(s,0,sizeof(s));
        scanf("%s",s);
        int m=x[s];
        if(x[s])
            printf("%s%d\n",s,x[s]);
        else
            printf("OK\n");
        x[s]++;
    }
    return 0;
}