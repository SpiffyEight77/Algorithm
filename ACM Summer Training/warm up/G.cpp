#include<iostream>
#include<cstring>
#define M 300010
using namespace std;
int n,t,a[M];
bool m[M],f;
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        memset(a,0,sizeof(a));
        memset(m,1,sizeof(m));
        f = true;
        for(int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for(int i = 0; i < n; i++)
            if(!m[a[i]])
                continue;
            else
            {
                t = a[i];
                while(t > 1)
                {
                    t = t % 2 == 0 ? t/=2 : (t * 3 + 1)/2;
                    m[t] = false;
                }
            }
        for(int i = n-1; i>= 0; i--)
            if(m[a[i]] && f)
            {
                f = false;
                printf("%d",a[i]);
            }
            else
                if(m[a[i]])
                    printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}