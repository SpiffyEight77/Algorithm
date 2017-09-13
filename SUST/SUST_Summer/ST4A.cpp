#include<iostream>
#include<cstring>
#include<algorithm>
#define Len 1010
using namespace std;
int t,l,l1,l2,c,a[Len],b[Len];
char s1[Len],s2[Len];
int main()
{
    scanf("%d",&t);
    c = 0;
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        scanf("%s %s",s1,s2);
        
        l1 = strlen(s1);
        for(int i = l1-1,j = 0; i >= 0; i--)
            a[j++] = s1[i] - '0';
        
        l2 = strlen(s2);
        for(int i = l2-1,j = 0; i >= 0; i--)
            b[j++] = s2[i] - '0';

        l = max(l1,l2);

        for(int i = 0; i < l; i++)
        {
            a[i] += b[i];
            if(a[i] >= 10)
            {
                a[i+1]++;
                a[i]%=10;
            }
            if(a[l])
                l++;
        }
        printf("Case %d:\n%s + %s = ",++c,s1,s2);
        for(int i = l-1; i >= 0; i--)
            printf("%d",a[i]);
        if(t)
            cout<<endl;
        cout<<endl;
    }
    return 0;
}