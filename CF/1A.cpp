#include<cstdio>
#include<iostream>
#include<cstring>
int main()
{
    int T,num[110];
    double n,c;
    scanf("%d",&T);
    while(T--)
    {
        c = 0;
        scanf("%lf",&n);
        for(int i = 0; i <n; i++)
        {
            scanf("%d",&num[i]);
            if(num[i] == 1)
                c++;
        }
        printf("%.2f\n",c/n);
    }
    return 0;
}