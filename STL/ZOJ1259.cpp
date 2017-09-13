#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<stack>
using namespace std;
int n,x,k,a[1100];
bool f1,f2;
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        while(1)
        {   
            stack<int>s1;
            stack<int>s2;
            for (int i = 1; i <= n; i++)
            {
                s1.push(i);
                s2.push(i);
            }
            f1 = 1; f2 = 1;
            scanf("%d",&a[0]);
            if(a[0] == 0)
                break;
            for (int i = 1; i < n; i++)
                scanf("%d",&a[i]);
            for (int i = 0; i < n; i++)
            {
                k = s1.top();
                if(k != a[i])
                {
                    f1 = 0;
                    break;
                }
                else
                    s1.pop();
            }

            for (int i = n-1; i >= 0; i--)
            {
                k = s2.top();
                if(k != a[i])
                {
                    f2 = 0;
                    break;
                }
                else
                    s2.pop();
            }

            if(!f1 && !f2)
                printf("No\n");
            else
                printf("Yes\n");
        }
        printf("\n");
    }
    return 0;
}