#include<iostream>
#include<algorithm>
using namespace std;
int n,m,i,j,k,a[3010],b[5000100];
bool cmp(int x,int y)
{
    return x > y;
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for(i = 0,k = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
                b[k++] = a[i] + a[j];
                      
        }
        sort(b,b+k,cmp);
        printf("%d",b[0]);
        for(int i = 1; i < m; i++)
            printf(" %d",b[i]);
        printf("\n");
    }
    return 0;
}