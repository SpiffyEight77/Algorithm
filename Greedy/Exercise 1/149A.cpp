#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int k,cnt,a[13];
bool f;
int main()
{
    while(scanf("%d",&k)!=EOF)
    {
        cnt = 0; f = false;
        for (int i = 1; i <= 12; i++)
            scanf("%d",&a[i]);
        sort(a+1,a+1+12);
        if(k == 0)
        {
            printf("0\n");
            continue;
        }
        for (int i = 12; i >= 1; i--)
        {
            k-=a[i];
            cnt++;
            if(k<=0)
            {
                printf("%d\n",cnt);
                f = true;
                break;
            }
        }
        if(!f)
            printf("-1\n");
    }
    return 0;
}