#include<cstdio>
#include<iostream>
using namespace std;

struct student{
int no;
char name[10];
char sex[6];
double age;
};

int main(){
    int n;
    double ave=0;;
    cin>>n;
    struct student stu[n];
    for(int i=0;i<n;i++){
        cin>>stu[i].no>>stu[i].name>>stu[i].sex>>stu[i].age; 
        ave+=stu[i].age;   
    }
    cout<<"Average age of"<<n<<"Students is "<<ave/n<<endl;
    return 0;
}