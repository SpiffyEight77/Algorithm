#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 100000;
int main()
{
    char s[maxn]; 
    int f=1;
    while(gets(s))
    {
      for(int i=0;i<strlen(s);i++)
      {
         if(s[i]=='"')
         {
          if(f)
           printf("``");
          else
           printf("''");
           f=!f;
         }
         else
         putchar(s[i]);
      }
      printf("\n");
    }
    return 0;
}