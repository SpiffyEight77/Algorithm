#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 1010
using namespace std;

struct stu
{
    int no;
    char name[20];
    char sex[10];
    int age;
};

typedef struct seqlist
{
    struct stu list[maxn];
    int length;
}seqlist;

void insert(seqlist *P, int pos, struct stu X)
{
    for(int i = P->length-1; i >= pos; i--)
        P->list[i+1] = P->list[i];
    P->list[pos]=X;
    P->length++;
}

void del(seqlist *P, int pos)
{
    for(int i = pos; i < P->length; i++)
        P->list[i] = P->list[i+1];
    P->length--;
}

int search_by_name(seqlist *P, char *S)
{
    int i,f = 0;
    for(i = 0; i < P->length; i++)
        if(strcmp(P->list[i].name,S) == 0)
           {
               printf("%d %s %s %d\n",P->list[i].no,P->list[i].name,P->list[i].sex,P->list[i].age);
               f = 1;
           }
    if( !f )
        return -1;
    return 1;
}

int search_by_sex(seqlist *P, char *C)
{
    int i,f = 0;;
    for(i = 0; i < P->length; i++)
        if(strcmp(P->list[i].sex,C) == 0)
             {
                 printf("%d %s %s %d\n",P->list[i].no,P->list[i].name,P->list[i].sex,P->list[i].age);
                 f = 1;
             }
    if( !f )
        return -1;
    return 1;
}

void search(seqlist *P, char *S, char *C)
{
    for(int i = 0; i < P->length; i++)
        if(strcmp(P->list[i].name,S) == 0 && strcmp(P->list[i].sex,C) == 0)
             {
                 printf("%d %s %s %d\n",P->list[i].no,P->list[i].name,P->list[i].sex,P->list[i].age);
                 return ;
             }
    printf("Not found this student!\n");
}

int main()
{
    char S[maxn],C[10];
    int pos,n,f;
    struct stu X,x;
    seqlist s,*P;
    P=&s;
    printf("Length = ");
    scanf("%d",&P->length);
    for(int i = 0; i < P->length; i++)
      scanf("%d %s %s %d",&P->list[i].no,P->list[i].name,P->list[i].sex,&P->list[i].age);
    printf("==============================================================================\n");
    printf("1. insert\n\n2. delete\n\n3. search by name\n\n4. search by sex\n\n5.search by name and sex\n\nplease input your section = ");
    scanf("%d",&n); 
    switch(n)
    {
        case 1: { printf("Pos = "); scanf("%d",&pos); printf("Input X = ");    scanf("%d %s %s %d",&X.no,X.name,X.sex,&X.age); insert(P,pos,X); break;}
        case 2: { printf("Pos = "); scanf("%d",&pos); del(P,pos); break;}
        case 3: { printf("Input name = "); scanf("%s",S); f = search_by_name(P,S); if( f == -1 ) printf("Not found this student!\n"); break;}
        case 4: { printf("Input sex = ");  scanf("%s",C); f = search_by_sex(P,C);  if( f == -1 ) printf("Not found this student!\n"); break;}
        case 5: { printf("Input name and sex = "); scanf("%s %s",S,C); search(P,S,C); break;}
    }  
    if(n >= 3)
     return 0; 
    for(int i = 0; i<P->length; i++)
        printf("%d %s %s %d\n",P->list[i].no,P->list[i].name,P->list[i].sex,P->list[i].age); 
    return 0;
}
