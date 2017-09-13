#include<stdio.h>
int main()
{
printf("    *** ***\n");
printf(" ********* *********\n");
printf("*********** ***********\n");
printf("************ ************\n");
printf("************* *************\n");
printf("************** **************\n");
printf(" ******* *** *** *******\n");
printf(" ****** ***** ******\n");
printf(" ****** *** ******\n");
printf(" ****** * ******\n");
printf(" ****** * ******\n");
for (int c = 8, d = 12; d > 0; d = d - 2, c++)
{
for (int a = 1; a <= c; a++)
{
printf(" ");
}
for (int b = 1; b <= d; b++)
{
printf("*");
}
printf("\n");
}
return 0;
}


