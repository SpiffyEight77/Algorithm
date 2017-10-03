// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans;
// int main()
// {
//     ans = 0;
//     cin>>s;
//     l = strlen(s);
//     for (int i = 0; i < l; i++)
//         ans+=s[i]-'0';
//     printf("%d %d\n",l,ans);
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans,n;
// int main()
// {
//     ans = 0;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//         ans+=i;
//     printf("%d\n",ans);
//     return 0;
// }

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[110];
int l,ans,inch,foot,n;
int main()
{
    ans = 0;
    scanf("%dcm",&n);
    foot = n / 30.48;
    inch = n * 12 / 30.48 - foot * 12;
    printf("%dfeet %dinches\n",foot,inch);
    return 0;
}