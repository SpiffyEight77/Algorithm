#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 1010
using namespace std;

int s[maxn],b[maxn],m[maxn],m2[maxn];

int main()
{
    int n,A,B,t = 0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n == 0)
            break;
        
        memset(s,0,sizeof(s));
        
        for(int i = 0; i < n; i++)
            scanf("%d",&s[i]);
        
        printf("Game %d:\n",++t);

        while(1)
        {
            A = 0;
            B = 0;
            memset(b,0,sizeof(b));
            memset(m,0,sizeof(m));
            memset(m2,0,sizeof(m2));

            for(int i = 0; i < n; i++)
                scanf("%d",&b[i]);
            
            if(b[0] == 0)
                break;

            for(int i = 0;i < n; i++)
                if(s[i] == b[i])
                 {   
                     A++;
                     m[i] = 1;
                     m2[i] = 1;
                 }
            
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n;j++)
                    if(s[i] == b[j] && m[i] == 0 && m2[j] == 0)
                    {
                        B++;
                        m[i] = 1;
                        m2[j] = 1;
                    }

                printf("    (%d,%d)\n",A,B);
        }
    }
    return 0;
}
