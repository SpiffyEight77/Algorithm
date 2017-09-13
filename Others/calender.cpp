#include <stdio.h>

 

int main(int argc, const char * argv[]) {

    // insert code here..

    int year,month,day=0,day1=0;

    printf("请输入年份：");

    scanf("%d",&year);

    printf("请输入月份：");

    scanf("%d",&month);

    printf("一\t二\t三\t四\t五\t六\t日\n");

    //判断年份是否为闰年或这平年

    for (int i=1900; i<year; i++) {

        if((i%4==0&&i%100!=0)||i%400==0){

            day=day+366;

        }else{

            day=day+365;

        }

    }

    

    //判断月份

    for(int m=1;m<=month;m++){

        switch (m) {

            case 4:case 6:case 9:case 11:

                day1=30;

                break;

            case 2:

                if((year%4==0&&year%100!=0)||year%400==0) {

                    day1=29;

                }else{

                    day1=28;

                }

                break;

            default:

                day1=31;

                break;

        }

        if (m<month) {

        day=day+day1;

        }

    }

    int t;

    t=day%7;

   //判断这个月的第一天是星期几

    for (int i=0; i<t; i++) {

        printf("\t");

    }

    //控制格式

    for (int i=1; i<=day1; i++) {

        printf("%d\t",i);

        if ((i+day)%7==0) {

            printf("\n");

        }

    }

    printf("\n\n");

    return 0;

    

}