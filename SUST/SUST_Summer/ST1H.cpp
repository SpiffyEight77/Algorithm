#include<iostream>
#include<cstring>
using namespace std;
int t,x,y,map[5010][5010]={0};
int main()
{
    for(int i = 0; i <= 5000; i++)
        if(i % 2 == 0)
            map[i][i] = i + i;
        else
            map[i][i] = i + i - 1;
    for(int i = 2, j = 0; i <= 5000; i++)
    {
        if(i % 2 == 0)
            map[i][j] = i + j;
        else
            map[i][j] = i + j - 1;
        j++;
    }
        
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(map[x][y])
            printf("%d\n",map[x][y]);
        else
            printf("No Number\n");
    }
    return 0;
}