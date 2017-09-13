#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int a[10010];
    
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int sum =1;
        for(int i = 0 ; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i] % 2 != 0)
                sum*=a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}