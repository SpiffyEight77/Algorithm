#include<cstdio>
#include<iostream>
#include<cstring>
#define len 101
using namespace std;
int A[len] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int a[len] = {0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18,-19,-20,-21,-22,-23,-24,-25,-26};
int n,x;
char c,d;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%d",&c,&x);
		if(c >= 'a' && c <= 'z')
			printf("%d\n",a[c-'a'+1] + x);
		else
			printf("%d\n",A[c-'A'+1] + x);
	}
	return 0;
}
