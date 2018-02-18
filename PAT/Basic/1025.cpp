#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;
struct node
{
    int address;
    int data;
    int next;
};
int l,N,k,t,len,next_add;
int main()
{
    vector<node> F;
    vector<node> R;
    node n;
    node add[100000];
    cin>>l>>N>>k;
    for (int i = 0; i < N; i++)
    {
        cin>>n.address>>n.data>>n.next;
        add[n.address] = n;
    }
    next_add = l;
    while(next_add != -1)
    {
        F.push_back(add[next_add]);
        next_add = add[next_add].next;
    }
    len = F.size();
    t = k - 1;
    while(t < len)
    {
        for (int i = t; i > t - k; i--)
            R.push_back(F[i]);
        t += k;
    }
    for (int i = t - k + 1; i < len; i++)
        R.push_back(F[i]);
    for (int i = 0; i < len - 1; i++)
    {
        R[i].next = R[i+1].address;
        printf("%05d %d %05d\n",R[i].address,R[i].data,R[i].next);
    }
    printf("%05d %d %d\n",R[len-1].address,R[len-1].data,-1);
    return 0;
}