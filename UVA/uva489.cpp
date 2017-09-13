#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 1010
using namespace std;

int round,l1,l2,lose,last,win,chance;
char s1[maxn];
char s2[maxn];

void guess(char c)
{
    int bad=1;
    for(int i=0;i<l1;i++)
        if(c == s1[i])
        {   
            last--;
            s1[i] = ' ';
            bad = 0;
        }
        if(!last) win=1;
        if(bad) chance--;
        if(!chance) lose=1;
}

int main()
{
    while(scanf("%d",&round)!=EOF)
    { 
        if(round == -1)
         break;
        lose=0; win=0; chance=7;
        scanf("%s %s",s1,s2);
        last=l1=strlen(s1);
        l2=strlen(s2);
        for(int i=0;i<l2;i++)
           {
               guess(s2[i]);
               if(win || lose) break;
           }
           printf("Round %d\n",round);
           if(win)
            printf("You win.\n");
           else
           if(lose)
            printf("You lose.\n");
           else
            printf("You chickened out.\n");
    }
    return 0;
}