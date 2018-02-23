#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,t,k,a[Maxn],b[Maxn];
bool f;
bool check(int x[])
{
    for (int i = 0; i < n; i++)
        if(x[i] != b[i])
            return false;
    return true;
}

bool insertsort(int y[])
{
    f = false;
    for (int i = 1; i < n; i++)
    {
        t = y[i];
        k = i - 1;
        while(k >= 0 && t < y[k])
        {
            y[k+1] = y[k];
            k--;
        }
        y[k+1] = t;
        if( check(y) )
        {
            cout<<"Insertion Sort"<<endl;
            f = true;
            break;
        }
    }
    if(f)
        return true;
    else
        return false;
}

int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        cin>>b[i];
    if(insertsort(a))
        for (int i = 0; i < n; i++)
            cout<<b[i]<<" ";
    else
    {
        cout<<"Merge Sort"<<endl;
        for (int i = 0; i < n; i++)
            cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}