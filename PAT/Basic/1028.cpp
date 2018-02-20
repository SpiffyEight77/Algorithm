#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,cnt = 0;
char l[11] = "1814/09/06",r[11] = "2014/09/06",youngest[11] = "1814/09/06",oldest[11] = "2014/09/06",s[11],sy[11],so[11],date[11];
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s>>date;
        if(strcmp(date,l) >= 0 && strcmp(date,r) <= 0)
        {
            cnt++;
            if(strcmp(date,youngest) >= 0)
            {
                strcpy(youngest,date);
                strcpy(sy,s);
            }
            if(strcmp(date,oldest) <= 0)
            {
                strcpy(oldest,date);
                strcpy(so,s);
            }
        }
    }
    if(cnt == 0)
        cout<<"0"<<endl;
    else
        cout<<cnt<<" "<<so<<" "<<sy<<endl;
    return 0;
}