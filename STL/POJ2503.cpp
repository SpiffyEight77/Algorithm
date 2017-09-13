// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// #include<map>
// using namespace std;
// const int M = 110;
// char s1[M],s2[M],s[M],t,str[M];
// int k;
// int main()
// {
//     map<string,string>mp;
//     map<string,bool>mark;
//    while(gets(s))
//    {
//         if(strlen(s) == 0)
//             break;
//         sscanf(s,"%s %s",s1,s2);
//         mp[s2] = s1;
//         mark[s2] = 1;
//    }
//     while(cin>>str)
//     {
//         if(mark[str])
//             cout<<mp[str]<<endl;
//         else
//             cout<<"eh"<<endl;
//     }
//     return 0;
// }
#include<iostream>
#include<cstring>
#include<string>
#include<map>
#include<stdio.h>
using namespace std;
 
int main()
{
    map<string,string> d;
    char str1[12],str2[12],str[30];
       while(gets(str))
       {
           if(strlen(str)==0)
           break;
           sscanf(str,"%s %s",str1,str2);
           d[str2]=str1;
       }
       string str3,p_out;
       while(cin>>str3)
       {
           p_out=d[string(str3)];
           if(p_out.length()==0)
           cout<<"eh"<<endl;
           else
           cout<<p_out<<endl;
       }
       return 0;
}