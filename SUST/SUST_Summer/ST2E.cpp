#include<iostream>
using namespace std;
int n,c,x,y,k,ans;
int gcd(int x,int y)
{
    return y == 0 ? x : gcd(y,x%y); 
}
int main()
{
    scanf("%d",&n);
    for(c = 1; c <= n; c++)
    {
        ans = 1;
        scanf("%d%d",&x,&y);
        k = gcd(x,y);
        if(x < y)
            swap(x,y);
        x/=k;
        y/=k;
        while(x%(1+y) == 0)
        {
            ans++;
            x/=(1+y);
            if(x < y)
                swap(x,y);
        }
        printf("Case #%d: %d\n",c,ans);
    }
    return 0;
}

#include<iostream>
using namespace std;
int n,c,x,y,k,ans;
int gcd(int x,int y)
{
    return y == 0 ? x : gcd(y,x%y); 
}
int main()
{
    scanf("%d",&n);
    for(c = 1; c <= n; c++)
    {
        ans = 1;
        scanf("%d%d",&x,&y);
        k = gcd(x,y);
        x/=k;
        y/=k;
        while(1)
        {
            if(x > y && x % (1 + y) == 0)
                x/=(1+y),ans++;
            else
                if(x < y && y % (1 + x) == 0)
                    y/=(1+x),ans++;
            else
                break;
        }
        printf("Case #%d: %d\n",c,ans);
    }
    return 0;
}