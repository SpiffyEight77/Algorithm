#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
int n,b[Maxn],cnt,a[Maxn];
bool f;
int main()
{
    while(cin>>n)
    {
        cnt = 0;
        
        for (int i = 0; i < n; i++)
            cin>>a[i];
        
        sort(a,a+n);

        for (int i = 0; i < n; i++)
            if(a[i] != a[i+1])
                b[cnt++] = a[i];

        sort(b,b+cnt);
        
        if(cnt > 3)
            f = false;
        else
            if( cnt<=2 || (cnt == 3 && (abs(b[2] - b[1]) == abs(b[1] - b[0]) ) ) )
                f = true;
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}