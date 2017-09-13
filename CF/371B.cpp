#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
const long long maxn = 100000;
using namespace std;
int main(){
    long long a[maxn],ave,x;
    int n,f;
    while(scanf("%d",&n)!=EOF){
        memset(a,0,sizeof(a));
        ave=0; f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ave+=a[i];
        }
       ave/=n;
       sort(a,a+n);
       x=ave-a[0];
       printf("%d %d\n",ave,x);
       for(int i=1;i<n;i++){
           if( (a[i] > ave && a[i]-ave != x) || (a[i] < ave && ave-a[i] != x) ){ 
                printf("NO\n");
                f=1;
                break;
           }
       }
       if(f==1)
        continue;
       printf("YES\n");
    }
    return 0;
}