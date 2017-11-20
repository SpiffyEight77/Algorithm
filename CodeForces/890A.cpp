#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
int a[Maxn],ans;
bool f;
int main()
{
    ans = 0;
    f = false;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
    for (int i = 1; i <= 6; i++)
        ans += a[i];
        
    if(ans % 2 != 0)
    {
        cout<<"NO"<<endl; 
        return 0;
    }

    for (int i = 1; i <= 4; i++)
        for (int j = i + 1; j <= 5; j++)
            for (int k = j + 1; k <= 6; k++)
                if(a[i] + a[j] + a[k] == ans / 2 )
                {
                    f = true;
                    break;
                }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;            
    return 0;
}