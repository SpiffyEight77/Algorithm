#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAXN = 1000000;
int fac[] = {1,1,2,6,24,120,720,5040,40320,362880};
bool vis[MAXN];
int dir[4][2] = {-1,0,1,0,0,-1,0,1};
char indexs[5]="udlr";
struct Node
{
    int s[9];
    int loc;
    int status;
    string path;
};
Node ncur;
string path;
int aim = 46234;
int cantor(int s[])
{
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int num = 0;
        for (int j = i + 1; j < 9; j++)
            if(s[j] < s[i])
                num++;
        sum += (num*fac[9-i-1]);
    }
    return sum+1;
}
bool bfs()
{
    memset(vis,false,sizeof(vis));
    Node cur,next;
    queue<Node> q;
    q.push(ncur);
    while(!q.empty())
    {
        cur = q.front();
        q.pop();
        if(cur.status == aim)
        {
            path = cur.path;
            return true;
        }
        int x = cur.loc/3;
        int y = cur.loc%3;
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dir[i][0];
            int yy = y + dir[i][1];
            if(xx < 0 || xx > 2 || yy < 0 || yy > 2)
                continue;
                next = cur;
                next.loc = xx * 3 + yy;
                next.s[cur.loc] = next.s[next.loc];
                next.s[next.loc] = 0;
                next.status=cantor(next.s);
                if(!vis[next.status])
                {
                    vis[next.status] = true;
                    next.path = next.path + indexs[i];
                    if(next.status == aim)
                    {
                        path = next.path;
                        return true;
                    }
                    q.push(next);
                }
        }
    }
    return false;
}
int main()
{
    char ch;
    while(cin>>ch)
    {
        if(ch == 'x') 
        {
            ncur.s[0] = 0;
            ncur.loc = 0;
        }
        else
            ncur.s[0] = ch - '0';
        for (int i = 1; i < 9; i++)
        {
            cin>>ch;
            if(ch == 'x')
            {
                ncur.s[i] = 0;
                ncur.loc = i;
            }
            else
                ncur.s[i] = ch - '0';
        }
        ncur.status = cantor(ncur.s);
        if(bfs())
            cout<<path<<endl;
        else
            cout <<"unsolvable"<<endl;
    }
    return 0;
}





