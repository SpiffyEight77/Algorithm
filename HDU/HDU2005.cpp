#include<cstdio>
#include<iostream>

bool isleap(int year)
{
    if(year%400 == 0 || (year%4 == 0 && year%100 !=0) )
        return true;
    return false;
}

int main()
{
    int y,m,d,i,sum;
    bool f;
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        sum = 0;
        f = isleap(y);
        for(i = 1;i<m; i++)
        {
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i ==12)
                sum+=31;
            else
                if(i == 2 && f == true)
                    sum+=29;
            else
                if(f == false && i ==2)
                    sum+=28;
            else
                sum+=30;
        }
        printf("%d\n",sum+d);
    }
    return 0;
}