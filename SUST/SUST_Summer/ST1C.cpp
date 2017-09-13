#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
char s[1010];
int l,x,i,j,a[1010];
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        memset(a,0,sizeof(a));
        l = strlen(s);
        x = 0;
        for(i = l-1, j = 0; i >= 0; i--)
        {
            if(s[i] == '5')
                continue;
            else
            {
                while(s[i] != '5')
                {
                    if(i == -1)
                        break;
                    a[j] += pow(10,x++) * (s[i--] - '0');
                }
                j++;
                x = 0;
            }
        }
        sort(a,a+j);
        printf("%d",a[0]);
        for(i = 1; i < j; i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}