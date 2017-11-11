#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 100010;
char a,b;
int main()
{
    cin>>a>>b;
    if(a > b)
        cout<<">"<<endl;
    else
        if(a < b)
            cout<<"<"<<endl;
    else
        cout<<"="<<endl;
    return 0;
}