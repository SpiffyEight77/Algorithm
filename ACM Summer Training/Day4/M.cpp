#include<iostream>
#include<cstring>
#define M 1010
using namespace std;
int n,top,x,s[M],a[M];
bool f;
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        while(scanf("%d",&s[1])!=EOF)
        {
            if(s[1] == 0)
            {
                printf("\n");
                break;
            }
            for (int i = 2; i <= n; i++)
                scanf("%d",&s[i]);
            top = 0; f = false;
            for (int i = 1,j = 1; i <= n; i++)
            {
                a[++top] = i;
                while(a[top] == s[j])
                {
                    j++;
                    top--;
                }
                if(j >= n)
                {
                    f = true;
                    break;
                }
            }
            if(f)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}