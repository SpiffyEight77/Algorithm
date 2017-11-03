#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
const int maxn = 100000;
int n,ans,a[4][11],num[1100],m[1100];
bool f;
int main()
{
    while(cin>>n)
    {
        f = true;
        memset(num,0,sizeof(num));
        memset(a,0,sizeof(a));
        memset(m,0,sizeof(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                scanf("%d",&a[i][j]);
                num[a[i][j]]++;
            }
        }

        for (int i = 1; i <= 9; i++)
            if(num[i])
                m[i] = 1;
            else
            {
                f = false;
                break;
            }
        
        if(f)
        {
            for (int i = 1; i <= 9; i++)
            {   
                for (int j = 0; j <= 9; j++)
                {
                    if(num[j] == 3)
                    {
                        m[i*100+j*10+j] = 1;
                        m[j*100+i*10+j] = 1;
                        m[j*100+j*10+i] = 1;
                        m[j*100+j*10+j] = 1;
                        m[i*10+j] = 1;
                        m[j*10+i] = 1;
                        m[j*10+j] = 1;
                    }
                    else
                        if(num[j] == 2)
                        {
                            m[i*100+j*10+j] = 1;
                            m[j*100+i*10+j] = 1;
                            m[j*100+j*10+i] = 1;
                            m[i*10+j] = 1;
                            m[j*10+i] = 1;
                        }
                    else
                        if(i != j && num[j] == 1)
                        {
                            m[i*10+j] = 1;
                            m[j*10+i] = 1;
                        }
                    else
                    {
                        f = false;
                        break;
                    }
                }
                if(!f)
                    break;
            }
        }

        for (int i = 1; i <= 1000; i++)
            if(m[i] == 0)
            {
                cout<<i-1<<endl;
                break;
            }
    }
    return 0;
}