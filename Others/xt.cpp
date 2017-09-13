#include <stdio.h>
#define MAX 100

typedef struct stu{
	int no;
	char name[10];
	char sex[5];
	int age;
}stu;

typedef struct seqList{
	struct stu list[MAX];
	int length;
}seqList;

void insert(seqList *L,int pos,stu x){
	int i;
	for(i=L->length-1;i>=pos-1;i--)
		L->list[i+1]=L->list[i];
	L->list[pos-1]=x;
	L->length++;
}

void deleta(seqList *L,int dpos){
	int i;
	for(i=dpos-1;i<L->length;i++)
		L->list[i]=L->list[i+1];
	L->length--;
}

int search(seqList *L,stu x){
	int i;
	for(i=0;i<L->length;i++)
		if(L->list[i].no==x.no)
			return i;
		return (-1);
}

int main(){
	seqList s,*L;
	int pos;
	int dpos;
	int i;
	int j;
	int p;
	int o;
	struct stu x;
	L=&s;

	printf("input length:");
	scanf("%d",&L->length);

	for(i=0;i<L->length;i++)
		scanf("%d %s %s %d",&L->list[i].no,L->list[i].name,L->list[i].sex,&L->list[i].age);
	
	printf("输入1插入，输入2删除，输入3查找，结束输入0:");
	scanf("%d",&p);

	

	switch(p){
	case 0:break;
	case 1:{
		printf("input pos:");
		scanf("%d",&pos);

		printf("input x:");
		scanf("%d%s%s%d",&x.no,x.name,x.sex,&x.age);

		insert(L,pos,x);

		for(j=0;j<L->length;j++)
		printf("%5d%5s%5s%5d\n",L->list[j].no,L->list[j].name,L->list[j].sex,L->list[j].age);
		printf("\n");
		break;
		
	}
	case 2:{
		printf("input dpos:");
		scanf("%d",&dpos);

		deleta(L,dpos);

		for(j=0;j<L->length;j++)
		printf("%5d%5s%5s%5d\n",L->list[j].no,L->list[j].name,L->list[j].sex,L->list[j].age);
		printf("\n");
		break;
		}
	case 3:{
		printf("input no:");
		scanf("%d",&x.no);

		o=search(L,x);
		
		if(o==-1)
			printf("查无此人!\n");
		else
			printf("%5d%5s%5s%5d\n",L->list[o].no,L->list[o].name,L->list[o].sex,L->list[o].age);	
		break;
		}
	}
	
	return 0;
}