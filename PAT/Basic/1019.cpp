#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000
using namespace std;
int sum_1,sum_2,ans,n,a[4];
bool cmp(int x,int y)
{
    return x > y;
}
int main()
{
    cin>>n;
    a[0] = n / 1000;
    a[1] = n / 100 % 10;
    a[2] = n / 10 % 10;
    a[3] = n % 10;
    if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
    {
        cout<<n<<" - "<<n<<" = "<<"0000"<<endl;
        return 0;
    }
    
    while(ans != 6174)
    {
        sort(a,a+4,cmp);
        sum_1 = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];
        sort(a,a+4);
        sum_2 = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];

        ans = sum_1 - sum_2;

        printf("%04d - %04d = %04d\n",sum_1,sum_2,ans);

        a[0] = ans / 1000;
        a[1] = ans / 100 % 10;
        a[2] = ans / 10 % 10;
        a[3] = ans % 10;

    }
    return 0;
}