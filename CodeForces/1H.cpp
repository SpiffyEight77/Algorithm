#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 88
using namespace std;

char s[maxn];

double solve(char *a)
{
    int l = strlen(a);
    int c;
    double sum = 0,k;
    for(int i = l-1; i >= 0; i--)
    {
        if(a[i] >= '0' && a[i] <= '9' && c == 0)
        {
            c+=a[i]-'0';
            if(a[i-1] >= '0' && a[i-1] <= '9')
                c+=(a[i-1]-'0')*10;
        }
        else
        if(a[i] > '9')
        {
                switch(a[i])
                {
                    case 'C': { k = 12.01; break; }
                    case 'H': { k = 1.008; break; }
                    case 'O': { k = 16.00; break; }
                    case 'N': { k = 14.01; break; }
                }
               if(c != 0)
                sum+=c*k;
               else
                sum+=k;
              c = 0;
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%s",s);
        printf("%.3lf\n",solve(s));
    }
    return 0;
}