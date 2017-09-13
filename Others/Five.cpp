#include<cstdio>
#include<iostream>
#define maxn 18
using namespace std;

int map[maxn][maxn];
int k,t;

bool solve(int x,int y)
{
    int xx,yy,xxx,yyy,sum;
    sum = 1;
    xx = x; xxx = x;
    yy = y; yyy = y;
    for(int i = 1; i<=4; i++)
    {
        if(yy+1>=1 && yy+1<=15 && yyy+1>=1 && yyy-1<=15)
        {
            if(map[xx][yy+1] == t)
            {
                yy++;
                sum++;
            }
            if(map[xxx][yyy-1] == t)
            {
                yyy--;
                sum++;
            }
        }
        if(sum >= 5)
            return true;
    }

    sum = 1;
    xx = x; xxx = x;
    yy = y; yyy = y;
    for(int i = 1; i<=4; i++)
    {
        if(xx+1>=1 && xx+1<=15 && xxx+1>=1 && xxx-1<=15)
        {
            if(map[xx-1][yy] == t)
            {
                xx++;
                sum++;
            }
            if(map[xxx+1][yyy] == t)
            {
                xxx--;
                sum++;
            }
        }
        if(sum >= 5)
            return true;
    }

    sum = 1;
    xx = x; xxx = x;
    yy = y; yyy = y;
    for(int i = 1; i<=4; i++)
    {
        if(yy+1>=1 && yy+1<=15 && yyy-1>=1 && yyy-1<=15 && xx-1>=1 && xx-1<=15 && xxx+1>=1 && xxx+1<=15)
        {
            if(map[xx-1][yy+1] == t)
            {
                xx--;
                yy++;
                sum++;
            }
            if(map[xxx+1][yyy-1] == t)
            {
                xxx++;
                yyy++;
                sum++;
            }
        }
        if(sum >= 5)
            return true;
    }

    sum = 1;
    xx = x; xxx = x;
    yy = y; yyy = y;
    for(int i = 1; i<=4; i++)
    {
        if(yy+1>=1 && yy+1<=15 && yyy-1>=1 && yyy-1<=15 && xx+1>=1 && xx+1<=15 && xxx-1>=1 && xxx-1<=15)
        {
            if(map[xx+1][yy+1] == t)
            {
                xx++;
                yy++;
                sum++;
            }
            if(map[xxx-1][yyy-1] == t)
            {
                xxx++;
                yyy++;
                sum++;
            }
        }
        if(sum >= 5)
            return true;
    }
    return false;
}

int main()
{
    int n,x,y,c;
    bool r;
    scanf("%d",&n);
    memset(map,-1,sizeof(map));
    for(k = 1; k <= n; k++)
    {
        r = false;
        scanf("%d %d",&x,&y);
        if(k % 2 == 0)
            map[x][y] = 0;
        else
            map[x][y] = 1;
        if(k > 8 && r == false)
        {
            t = k % 2;
            r = solve(x,y);
            if(r == true)
                c = k;
        }
    }
    if(c % 2 == 1)
        printf("A %d\n",c);
    else
    if(c % 2 == 0)
        printf("B %d\n",c);
    else
        printf("Tie\n");
    return 0;
} 