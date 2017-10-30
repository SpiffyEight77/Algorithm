#include<iostream>
#include<cstring>
#include<algorithm>
#define M 100010
using namespace std;
char s[M];
int n,l,sum,a[M];
int main()
{
    while(scanf("%d",&n))
    {
        scanf("%s",s);
        sum = 0;
        l = strlen(s);
        for(int i = 0; i < l; i++)
        {
            sum += s[i] - '0';
            //a[i] = s[i] - '0';
        }
        //sort(a,a+l);
        if(sum < n)
            printf("%d\n",n - sum);
        else
            if(sum >= n)
                printf("0\n");
    }
    return 0;
}