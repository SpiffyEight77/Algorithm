#include<cstdio>
#include<iostream>
int main()
{
    int n,i,j,num;
    double sum,k;
    scanf("%d",&n);
    for(i = 0; i<n; i++)
    {
        scanf("%d",&num);
        sum = 0;
        k = 1;
        for(j = 1;j<=num; j++)
        {
            sum+=1.0/(j*1.0)*k;
            k*=-1.0;
        }

        printf("%.2f\n",sum);
    }
    return 0;
}