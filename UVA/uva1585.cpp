#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
const int maxn = 85;
int main()
{
    int n;
    char s[maxn];
    cin>>n;
    while(n--)
    {
        int count=0;
        int score=0;
        memset(s,0,sizeof(s));
        cin>>s;
        int l=strlen(s);
        for(int i=0;i<l;i++)
         if(s[i]=='O')
          count++;
         else
         {
             for(int j=1;j<=count;j++)
              score+=j;
             count=0;
         }
         if(count)
          for(int j=1;j<=count;j++)
              score+=j;
         printf("%d\n",score);
    }
    return 0;
}