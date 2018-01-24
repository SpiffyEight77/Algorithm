#include<cstdio>
#include<iostream>
using namespace std;
string S;
char a[27] = {0};
int main()
{
    cin>>S;
    for (int i = 0; i < S.size(); i++)
        a[S[i] - 'a'] = 1;
    for (int i = 0; i < 26; i++)
        if(!a[i])
        {
            printf("%c\n",i+'a');
            return 0;
        }
    cout<<"None"<<endl;
    return 0;
}