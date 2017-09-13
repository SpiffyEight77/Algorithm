#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int i;
    char c[30];
    vector<int>a;
    map<string,int>s;
    s.clear();
    scanf("%s",c);
    printf("%d\n",s[c]);
    for(i = 0; i <= 10; i++)
        a.push_back(i);
    for(i = 0; i < a.size(); i++)
        printf("%d ",a[i]);
    return 0;
    
}