#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#define maxsize 10010
#define OK 1
#define OVERFLOW -1
#define ERROR 0
typedef int Status;

int n;
int S;
int i;



typedef struct Book
{
    char isbn[20];
    char book[20];
    double price;
}Book;

typedef struct SqList
{
    Book *book;
    int length;
}SqList;

Book e;

SqList L;

Status InitList(SqList &L)
{
    L.book = new Book[maxsize];
    if(L.book == NULL)
        return OVERFLOW;
    L.length = 0;
        return OK; 
}

void IniteListInsert(SqList &L)
{
    for(i = 0; i < L.length; i++)
        scanf("%s %s %lf",L.book[i].isbn,L.book[i].book,&L.book[i].price);
}

Status ListInsert(SqList &L,int pos,Book e)
{
    if(pos < 1 || pos > L.length+1)
        return ERROR;
    if(L.length == maxsize)
        return ERROR;

    for(int j = L.length-1; j >= pos-1; j--)
            L.book[j+1] = L.book[j];

    L.book[pos-1] = e;
    ++L.length;
    return OK;
}

Status ListDelete(SqList &L,int pos)
{
    if(pos < 1 || pos > L.length)
        return ERROR;
    
    for(int j = pos; j <= L.length-1; j++)
        L.book[j-1] = L.book[j];
    
    --L.length;
    return OK;
}

Status LocateElem(SqList &L,Book e)
{
    for(i = 0; i < L.length; i++)
        if(strcmp(L.book[i].isbn,e.isbn) == 0 && strcmp(L.book[i].book,e.book) == 0 && L.book[i].price == e.price)
            return i+1;
    return ERROR;
}

Status GetElem(SqList &L,int pos)
{
    for(i = 0; i < L.length; i++)
        if(i+1  == pos)
        {
            e = L.book[i];
            return OK;
        }
    return ERROR;
}

Status DestroyList(SqList &L)
{
    free(L.book);
    L.book = NULL;
    L.length = 0;
    return OK;
}

Status ClearList(SqList &L)
{
    L.length = 0;
    return OK;
}

Status EmptyList(SqList &L)
{
    if(L.book == NULL)
        return OK;
    return ERROR;
}

Status TravelElem(SqList &L)
{
    if(!EmptyList(L))
    {
        for(i = 0; i < L.length; i++)
            printf("%s %s %lf\n",L.book[i].isbn,L.book[i].book,L.book[i].price);
        return OK;
    }
    else
        return ERROR;
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        S = InitList(L);
        L.length = n;
        IniteListInsert(L);
        
        scanf("%d",&i);
        scanf("%s %s %lf",e.isbn,e.book,&e.price);
        S = ListInsert(L,i,e);
        S = TravelElem(L);

        scanf("%d",&i);
        S = ListDelete(L,i);
        S = TravelElem(L);

        S = EmptyList(L);
        printf("%d\n",S);

        scanf("%s %s %lf",e.isbn,e.book,&e.price);
        S = LocateElem(L,e);
        printf("%d\n",S);

        scanf("%d",&i);
        S = GetElem(L,i);
        printf("%s %s %1.lf\n",e.isbn,e.book,e.price);

        S = DestroyList(L);
        printf("%d\n",S);

        S = ClearList(L);
        printf("%d\n",S);

        //S = TravelElem(L);
        

    }
    return 0;
}