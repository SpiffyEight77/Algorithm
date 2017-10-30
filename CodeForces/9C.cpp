#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int a[11]={0,1,2,4,8,16,32,64,128,256,512};
    char n[15];
    while(scanf("%s",n)!=EOF)
    {
        int l = strlen(n);
        int sum = 0;
        for(int i = 0; i < l; i++)
        {
            if(n[i] > '1')
            {
                for(int j = 1; j <= l-i; j++)
                    sum+=a[j];
                break;
            }
            else
            if(n[i] == '1')
                sum+=a[l-i];
        }
        printf("%d\n",sum);
    }
    return 0;
}