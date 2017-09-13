#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char str[2010];
int n,i,j,l,sum,a[100010],map[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9};
bool f;
int main()
{
        scanf("%d",&n);
        getchar();
        j = 0; f = true;
        memset(a,0,sizeof(a));
        while(n--)
        {
            scanf("%s",str);
            l = strlen(str);
            for(i = 0; i < l; i++)
                if(str[i] == '-')
                    continue;
                else
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        a[j] = a[j] * 10 + map[(str[i] - 'A')];
                else
                    a[j] = a[j] * 10 + (str[i] - '0');
            j++;
        }
        sort(a,a+j);
        for(i = 0,sum = 1; i < j; i++)
            if(a[i] == a[i+1])
                sum++;
            else
                if(sum > 1)
                {
                    printf("%03d-%04d %d\n",a[i]/10000,a[i]%10000,sum);
                    f = false;
                    sum = 1;
                }
            else
                sum = 1;
        if(f)
            printf("No duplicates.\n");
    return 0;
}