#include<cstdio>
#include<iostream>
using namespace std;
struct stu{
   int  no;
   double  age;
   char name[20];
   char sex[10];
};
int main() {
    int n,i=0;
    double ave=0;
    cin>>n;
	struct stu stu[n];
    struct stu *p;
    int k=n;
    p=&stu[0];	
	while(n--){
        cin>>p->no>>p->age>>p->name>>p->sex;
        ave+=p->age;
        p++;
    }
    cout<<ave/k<<endl;
	return 0;
}