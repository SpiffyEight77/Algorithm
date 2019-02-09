#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int n,k,c,num;
int main()
{
    cin>>n>>k;

    c = 1;
    num = 1;
    while(c != k) {
        num+=2;
        c++;
    }
    if (num <= n) {
        cout<<"YES"<<endl;
    } else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}