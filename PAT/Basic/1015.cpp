#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Maxn 100000 + 10
using namespace std;
int n,l,h,x,y,z,cnt1,cnt2,cnt3,cnt4;
struct student{
    int id;
    int d;
    int c;
    int total;
}stu1[Maxn],stu2[Maxn],stu3[Maxn],stu4[Maxn];
bool cmp(student x, student y)
{
    if(x.total == y.total && x.d != y.d)
        return x.d > y.d;
    else
    if(x.total == y.total && x.d == y.d)
        return x.id < y.id;
    return x.total > y.total; 
}
int main()
{
    cin>>n>>l>>h;
    cnt1 = 0; cnt2 = 0; cnt3 = 0; cnt4 = 0;
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(y >= h && z >= h)
        {
            stu1[cnt1].id = x;
            stu1[cnt1].d = y;
            stu1[cnt1].c = z;
            stu1[cnt1].total = y + z; 
            cnt1++;
        }
        else
        if(y >= h && z < h && z >= l)
        {
            stu2[cnt2].id = x;
            stu2[cnt2].d = y;
            stu2[cnt2].c = z;
            stu2[cnt2].total = y + z;
            cnt2++;
        }
        else
        if(y < h && z < h && y >= z && y >= l && z >= l)
        {
            stu3[cnt3].id = x;
            stu3[cnt3].d = y;
            stu3[cnt3].c = z;
            stu3[cnt3].total = y + z;
            cnt3++;
        }
        else
        if(y >= l && z >= l)
        {
            stu4[cnt4].id = x;
            stu4[cnt4].d = y;
            stu4[cnt4].c = z;
            stu4[cnt4].total = y + z;
            cnt4++;
        }
    }
    sort(stu1,stu1 + cnt1,cmp);
    sort(stu2,stu2 + cnt2,cmp);
    sort(stu3,stu3 + cnt3,cmp);
    sort(stu4,stu4 + cnt4,cmp);
    cout<<cnt1+cnt2+cnt3+cnt4<<endl;
    for (int i = 0; i < cnt1; i++)
        printf("%d %d %d\n",stu1[i].id,stu1[i].d,stu1[i].c);
    for (int i = 0; i < cnt2; i++)
        printf("%d %d %d\n",stu2[i].id,stu2[i].d,stu2[i].c);
    for (int i = 0; i < cnt3; i++)
        printf("%d %d %d\n",stu3[i].id,stu3[i].d,stu3[i].c);
    for (int i = 0; i < cnt4; i++)
        printf("%d %d %d\n",stu4[i].id,stu4[i].d,stu4[i].c);
    return 0;
}