#include<iostream>
#define Len 1000100
using namespace std;
int n,x,y,c,cc,prime[Len];
bool a[Len]={false};
bool judge(int xx)
{
    int t = xx;
    int yy = 0;
    while(t)
    {
        yy+=t%10;
        t/=10;
    }
    return a[yy]; 
}
int main()
{
    int k = 0;
    a[1] = true;
    for(int i = 2; i <= Len; i++)
        if(!a[i])
            for(int j = i * 2; j <= Len; j += i)
                a[j] = true;
    for(int i = 1; i <= Len; i++)
        if(!a[i] && !judge(i))
            prime[k++] = i; 
    scanf("%d",&n);
    while(n--)
    {
        c = 0;
        scanf("%d%d",&x,&y);
        for(int i = 0; i < k; i++)
        {
            if(prime[i] < x)
                continue;
            else
                if(prime[i] <= y)
                    c++;
        }
        printf("Case #%d: %d\n",++cc,c);
    }
    return 0;
}