#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n,k,c;
    double sum;
    char s[90];
    cin>>n;
    while(n--)
    {
       k=1;
       sum=0;
       c=0;
       memset(s,0,sizeof(s));
       cin>>s;
       int l=strlen(s);
       for(int i=l-1;i>=0;i--)
       {
           if(s[i]>='0' && s[i]<='9')
            {
                c+=k*(s[i]-'0');
                k*=10;
            }
           else
            {
                if(c!=0)
                {
                if(s[i]=='C')
                    sum+=c*12.01;
                if(s[i]=='H')
                    sum+=c*1.008;
                if(s[i]=='O')
                    sum+=c*16.00;
                if(s[i]=='N')
                    sum+=c*14.01;
                }
                else
                {
                if(s[i]=='C')
                    sum+=12.01;
                if(s[i]=='H')
                    sum+=1.008;
                if(s[i]=='O')
                    sum+=16.00;
                if(s[i]=='N')
                    sum+=14.01;
                }
                k=1;
                c=0;
            }
       }
       printf("%.3f\n",sum);

    }
    return 0;
}