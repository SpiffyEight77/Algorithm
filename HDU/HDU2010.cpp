// #include<cstdio>
// #include<iostream>
// #include<cmath>
// int main()
// {
//     int m,n,i,j,k;
//     while(scanf("%d %d",&m,&n)!=EOF)
//     {
//         k = 0;
//         for(i = m; i <= n; i++)
//             if(pow(i/100,3)+ pow(i/10%10,3) + pow(i%10,3) == i)
//             {
//                 k++;
//                 if(k == 1)
//                     printf("%d",i);
//                 else
//                     printf(" %d",i);
//             }
//         if(k == 0)
//             printf("no");
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,k;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        k = 0;
        for(i = m; i <= n; i++)
            if(pow(i/100,3)+ pow(i/10%10,3) + pow(i%10,3) == i)
            {
                k++;
                if(k == 1)
                    printf("%d",i);
                else
                    printf(" %d",i);
            }
        if(k == 0)
            printf("no");
        printf("\n");
    }
    return 0;
}
