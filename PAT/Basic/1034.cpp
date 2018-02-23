#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
struct fs
{
    long long fz;
    long long fm;
}a,b;

int gcd(long long x,long long y)
{
    int t;
    while(y)
    {
        t = y;
        y = x % y;
        x = t; 
    }
    return x;
} 

void print(fs x)
{
    if(x.fz < 0)
    {
        cout<<"(";
        if(x.fz % x.fm == 0)
            cout<<x.fz/x.fm<<")";
        else
            if(abs(x.fz) > x.fm)
                cout<<x.fz/x.fm<<" "<<abs(x.fz%x.fm)<<"/"<<x.fm<<")";
        else
            cout<<x.fz%x.fm<<"/"<<x.fm<<")";
    }
    else
    {
        if(x.fz % x.fm == 0)
            cout<<x.fz/x.fm;
        else
            if(x.fz > x.fm)
                cout<<x.fz/x.fm<<" "<<abs(x.fz%x.fm)<<"/"<<x.fm;
        else
            cout<<x.fz%x.fm<<"/"<<x.fm;
    }
}

fs add(fs x,fs y)
{
    x.fz = x.fz * y.fm + y.fz * x.fm;
    x.fm *= y.fm;
    int k = abs(gcd(x.fz,x.fm));
    x.fz/=k;
    x.fm/=k;
    return x;
}

fs sub(fs x,fs y)
{
    x.fz = x.fz * y.fm - y.fz * x.fm;
    x.fm *= y.fm;
    int k = abs(gcd(x.fz,x.fm)); 
    x.fz/=k;
    x.fm/=k;
    return x;
}

fs mul(fs x,fs y)
{
    x.fz *= y.fz;
    x.fm *= y.fm;
    int k = abs(gcd(x.fz,x.fm)); 
    x.fz/=k;
    x.fm/=k;
    return x;
}

fs Div(fs x,fs y)
{
    x.fz *= y.fm;
    x.fm *= y.fz;
    if(x.fm < 0)
        x.fm = abs(x.fm),x.fz *= -1;
    int k = abs(gcd(x.fz,x.fm)); 
    x.fz/=k;
    x.fm/=k;
    return x;
}

int main()
{
    scanf("%lld/%lld %lld/%lld",&a.fz,&a.fm,&b.fz,&b.fm);
    
    int k = abs(gcd(a.fz,a.fm));
    a.fz /= k;
    a.fm /= k;

    k = abs(gcd(b.fz,b.fm));
    b.fz /= k;
    b.fm /= k;

    print(a);
    cout<<" + ";
    print(b);
    cout<<" = ";
    print(add(a,b));
    cout<<endl;

    print(a);
    cout<<" - ";
    print(b);
    cout<<" = ";
    print(sub(a,b));
    cout<<endl;

    print(a);
    cout<<" * ";
    print(b);
    cout<<" = ";
    print(mul(a,b));
    cout<<endl;

    print(a);
    cout<<" / ";
    print(b);
    cout<<" = ";

    if(b.fm == 0 || b.fz == 0)
        cout<<"Inf";
    else
        print(Div(a,b));
    cout<<endl;

    return 0;
}