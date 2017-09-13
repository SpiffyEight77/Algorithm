#include<iostream>
using namespace std;
double n;
int main()
{
    while(scanf("%lf",&n)!=EOF)
    {

        printf("%0.lf\n\n",n/2*(1+n));
    }
    return 0;
}