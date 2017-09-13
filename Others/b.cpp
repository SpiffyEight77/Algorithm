#include<stdio.h>
struct student{
    double age;
    int no;
    char name[20];
    char sex[30];
};
int main(){
    struct student stu[100];
    double sum=0;
    for(int i=0;i<100;i++){
        scanf("%lf",&stu[i].age);
        sum+=stu[i].age;
    }
    printf("%lf\n",sum/100.0);
    return 0;
}