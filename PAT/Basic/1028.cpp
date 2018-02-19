#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,cnt = 0;
struct person
{
    char name[10];
    int yy;
    int mm;
    int dd;
}p[Maxn];

int main()
{
    person youngest;
    person oldest;

    youngest.yy = 1814;
    youngest.mm = 9;
    youngest.dd = 6;

    oldest.yy = 2014;
    oldest.mm = 9;
    oldest.dd = 6;
    
    cin>>n;
    for (int i = 0; i < n; i++)
        scanf("%s %d/%d/%d",p[i].name,&p[i].yy,&p[i].mm,&p[i].dd);

    for (int i = 0; i < n; i++)
    {
        if( (p[i].yy > 1814 && p[i].yy < 2014) || (p[i].yy == 1814 && p[i].mm == 9 && p[i].dd >= 6) || (p[i].yy == 1814 && p[i].mm > 9) || (p[i].yy == 2014 && p[i].mm == 9 && p[i].dd <= 6) || (p[i].yy == 2014 && p[i].mm < 9) )
        {
            cnt++;

            if(p[i].yy == youngest.yy && p[i].mm == youngest.mm && p[i].dd >= youngest.dd)
                youngest = p[i];
            else
                if(p[i].yy == youngest.yy && p[i].mm >= youngest.mm)
                    youngest = p[i];
            else
                if(p[i].yy >= youngest.yy)
                    youngest = p[i];

            if(p[i].yy == oldest.yy && p[i].mm == oldest.mm && p[i].dd <= oldest.dd)
                oldest = p[i];
            else
                if(p[i].yy == oldest.yy && p[i].mm <= oldest.mm)
                    oldest = p[i];
            else
                if(p[i].yy <= oldest.yy)
                    oldest = p[i];
        }
    }
    
    if(cnt == 0)
        cout<<"0"<<endl;
    else
        cout<<cnt<<" "<<oldest.name<<" "<<youngest.name<<endl;
        
    return 0;
}