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

// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans,inch,foot,n;
// int main()
// {
//     ans = 0;
//     scanf("%dcm",&n);
//     foot = n / 30.48;
//     inch = (n - foot * 30.48) / 30.48 * 12;
//     printf("%dfeet %dinches\n",foot,inch);
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans,inch,foot,n;
// int main()
// {
//     scanf("%d",&n);
//     if(n+2>7)
//         printf("%d\n",n+2-7);
//     else
//         printf("%d\n",n+2);
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans,inch,foot,n;
// int main()
// {
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             printf("%d*%d=%d ",j,i,j*i);
//         printf("\n");
//     }
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans,inch,foot,n;
// int main()
// {
//     scanf("%d",&n);
//     if(n>=90)
//         printf("A\n");
//     else
//         if(n>=80)
//             printf("B\n");
//     else
//         if(n>=70)
//             printf("C\n");
//     else
//         if(n>=60)
//             printf("D\n");
//     else
//         printf("E\n");
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char s[110];
// int l,ans,inch,foot,n;
// int main()
// {
//     scanf("%s",s);
//     printf("%d\n",strlen(s));
//     return 0;
// }

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[110];
int l,ans,inch,foot,n;
double a,b,c,d,e,f;
int main()
{
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
    printf("%.1lf\n",(a+b+c+d+e+f)/6.0);
    return 0;
}