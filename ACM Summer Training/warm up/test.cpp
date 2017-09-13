#include<iostream>
#include<cstring>
using namespace std;
char s[1010];
int a[3],p1,p2,x,y,z;
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        memset(a,0,sizeof(a));
        x = 0; y = 0; z = 0;
        for(int i = 0,j = 0; i < strlen(s); i++)
            if(s[i] == 'z')
                p1 = i,x++;
            else
                if(s[i] == 'j')
                {
                    p2 = i,y++;
                }
            else
                z++;
        if(!x || !y || !z)
        {
            printf("Wrong Answer\n");
            continue;
        }
        else
            {
                for(int i = 0; i < p1; i++)
                    a[0]++;
                for(int i = p1 + 1; i < p2; i++)
                    a[1]++;
                for(int i = p2 + 1; i < strlen(s); i++)
                    a[2]++;
            }
        //printf("%d %d %d\n",a[0],a[1],a[2]);
        if(a[0] * a[1] == a[2])
            printf("Accepted\n");
        else
            printf("Wrong Answer\n");
    }
    return 0;
}