#include<cstdio>
#include<iostream>
#include<cstring>
const int maxn = 101000;
using namespace std;
int main(){
    char s[maxn],t[maxn];
    int i,j;
    while(scanf("%s %s",s,t)!=EOF){
        int l1 = strlen(s);
        int l2 = strlen(t);
        int c = 0;
        int k=0; 
        for(j=0;j<l2;j++){
            if(t[j] == s[k]){
                k++;
                c++; 
            }
        }
        if(c == l1)
          printf("Yes\n");
          else
          printf("No\n");
    }
    return 0;
}