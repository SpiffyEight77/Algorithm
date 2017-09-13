#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct DNA
{
    char s[55];
    int num;
}str[110];
int T,l,n;
bool cmp(DNA x,DNA y)
{
    return x.num < y.num;
}
int main()
{
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        scanf("%d%d",&l,&n);
        getchar();
        for(int i = 0; i < n; i++)
        {
            scanf("%s",str[i].s);
            str[i].num = 0;
            for(int j = 0; j < l; j++)
                for(int k = j + 1; k < l; k++)
                    if(str[i].s[j] > str[i].s[k])
                        str[i].num++;
        }
        sort(str,str+n,cmp);
        for(int i = 0; i < n; i++)
            printf("%s\n",str[i].s);
        if(T)
            printf("\n");
    }
    return 0;
}