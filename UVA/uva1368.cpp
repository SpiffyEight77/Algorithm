#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
const int maxn = 1005; 
using namespace std;
int main()
{
    int T,m,n,i,j,p,harmming,maxlen;
    char str[55][maxn],s[55];
    int a[4][maxn];
    cin>>T;
    while(T--)
    {
        harmming=0;
        memset(s,0,sizeof(s));
        memset(a,0,sizeof(a));
        scanf("%d %d",&m,&n);
        getchar();
        for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
         {
          scanf("%c",&str[i][j]);
          if(str[i][j] == 'A') a[0][j]++;
          if(str[i][j] == 'C') a[1][j]++;
          if(str[i][j] == 'G') a[2][j]++;
          if(str[i][j] == 'T') a[3][j]++;
         }
          getchar();
        } 
        for(j=0;j<n;j++)
        {
            maxlen=a[0][j]; p=0;
            for(i=1;i<4;i++)
            {
                if(a[i][j]>maxlen)
                   { p=i; maxlen=a[i][j]; }
            }
            if(p == 0 ) { printf("A"); s[j]='A'; }
            else if(p == 1) { printf("C"); s[j]='C'; }
            else if(p == 2) { printf("G"); s[j]='G'; }
            else if(p == 3) { printf("T"); s[j]='T'; }
        }
        for(j=0;j<n;j++)
            for(i=0;i<m;i++)
               if(str[i][j] != s[j])
                 harmming++;
        printf("\n%d\n",harmming);
    }
    return 0;
}