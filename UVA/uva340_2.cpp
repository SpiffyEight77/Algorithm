#include<cstdio>
#include<iostream>
#include<cstring>
#define length 1010
int ss[length],s[length];
int a[length],b[length];
int i,j,A,B;
int main()
{
    int l,t=0;
    while(scanf("%d",&l)!=EOF)
    {

        if(l == 0)
            break;
        
        for(i = 0; i<l; i++)
            scanf("%d",&ss[i]);
        
        printf("Game %d:\n",++t);
        while(1)
        {
        for(i = 0; i<l; i++)
            scanf("%d",&s[i]);
                if(s[0] == 0)
                    break;
        
        A = B = 0;
        
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        for(i = 0; i<l; i++)
        {
            if(ss[i] == s[i])
            {
                A++;
                a[i] = b[i] = 1;
            }
        }

        for(i = 0; i<l; i++)
            for(j = 0; j<l; j++)
            {
                if(s[j]==ss[i] && b[j]==0 && a[i] == 0)
                {
                    B++;
                    b[j]=a[i]=1;                
                }
            }

            printf("    (%d,%d)\n",A,B);
        }

        
    }
    return 0;
}