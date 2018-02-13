#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000
using namespace std;
int w1,w2,ans,n,c_1,c_2,j_1,j_2,b_1,b_2;
char x,y;
int main()
{
    w1 = 0; w2 = 0; ans = 0; 
    c_1 = 0; c_2 = 0; j_1 = 0; j_2 = 0; b_1 = 0; b_2 = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        if(x == 'C' && y == 'J')
        {
            w1++;
            c_1++;
        }

        if(x == 'C' && y == 'B')
        {
            w2++;
            b_2++;
        }

        if(x == 'J' && y == 'C')
        {
            w2++;
            c_2++;
        }

        if(x == 'J' && y == 'B')
        {
            w1++;
            j_1++;
        }

        if(x == 'B' && y == 'J')
        {
            w2++;
            j_2++;
        }

        if(x == 'B' && y == 'C')
        {
            w1++;
            b_1++;
        }

        if(x == y)
            ans++;
    }
    cout<<w1<<" "<<ans<<" "<<w2<<endl;
    cout<<w2<<" "<<ans<<" "<<w1<<endl;
    if(b_1 > c_1 && b_1 > j_1)
        cout<<"B";
    else
    if(c_1 > b_1 && c_1 > j_1)
        cout<<"C";
    else
    if(j_1 > c_1 && j_1 > b_1)
        cout<<"J";
    else
    if(b_1 == c_1 || b_1 == j_1)
        cout<<"B";
    else
    if(c_1 == j_1)
        cout<<"C";
    else
        cout<<"J";
    cout<<" ";

    if(b_2 > c_2 && b_2 > j_2)
        cout<<"B";
    else
    if(c_2 > b_2 && c_2 > j_2)
        cout<<"C";
    else
    if(j_2 > c_2 && j_2 > b_2)
        cout<<"J";
    else
    if(b_2 == c_2 || b_2 == j_2)
        cout<<"B";
    else
    if(c_2 == j_2)
        cout<<"C";
    else
        cout<<"J";
    cout<<endl;
    return 0;
}