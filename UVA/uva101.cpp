#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
const int maxn = 30;
using namespace std;

vector<int>pile[maxn];
int n;

void fine_p(int x,int &p,int &h)
{
  for(p=0;p<n;p++)
   for(h=0;h<pile[p].size();h++)
    if(pile[p][h] == x)
     return ;
}

void clear_block(int p,int h)
{
  for(int i=h+1;i<pile[p].size();i++)
  {
      int c=pile[p][i];
      pile[i].push_back(c);
  }
  pile[p].resize(h+1);
}

void move_ab(int p1,int p2,int h)
{
 for(int i=h;i<pile[p1].size();i++)
     pile[p2].push_back(pile[p1][i]);
  pile[p1].resize(h);
}

void print()
{
  for(int i=0;i<n;i++)
  {
      printf("%d:",i);
      for(int j=0;j<pile[i].size();j++)
       printf(" %d",pile[i][j]);
      printf("\n");
  }
}

int main()
{
    int a,b,pa,ha,pb,hb;
    string s1,s2;
    cin>>n;
    for(int i=0;i<n;i++)
     pile[i].push_back(i);
    while(cin>>s1>>a>>s2>>b)
    {
      fine_p(a,pa,ha);
      fine_p(b,pb,hb);
      if(pa == pb)
       continue;
      if(s2 == "onto") clear_block(pb,hb);
      if(s1 == "move") clear_block(pa,ha);
      move_ab(pa,pb,ha);
    }
    print();
    return 0;
}