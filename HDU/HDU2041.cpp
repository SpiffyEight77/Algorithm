#include<cstdio>
#include<iostream>
#define N 50
using namespace std;
long long step[N]={0,1,1};
int i,n,s;
int main()
{
    cin>>n;
    while(n--)
    {
    cin>>s;
    for(i=3;i<=s;i++)
      step[i]=step[i-1]+step[i-2];
    cout<<step[s]<<endl;
    }
    return 0;
}