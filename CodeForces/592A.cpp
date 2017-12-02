#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
char s[10][10];
bool f;
int aline,bline;
int main()
{
    aline = 8;
    bline = 1;
    for (int i = 1; i <= 8; i++)
        scanf("%s",s[i]);
    for (int i = 1; i <= 8; i++)
        for (int j = 0; j < 8; j++)
        { 
            f = true;
            if(s[i][j] == 'W')
            {
                for (int k = i-1; k >= 1; k--)
                    if(s[k][j] == 'B')
                    {
                        f = false;
                        break;
                    }
                if(f)
                    aline = min(aline,i);
            }
            else
                if(s[i][j] == 'B')
                {
                    for (int k = i+1; k <= 8; k++)
                        if(s[k][j] == 'W')
                        {
                            f = false;
                            break;
                        }
                    if(f)
                        bline = max(bline,i);
                }
        }
    //cout<<aline<<" "<<bline<<endl;
    if(aline - 1 <= 8 - bline)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
    return 0;
}

