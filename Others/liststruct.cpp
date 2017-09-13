#include <cstdlib>
#include<cstdio>
#define OK 1
#define ERROR 0
#define OVERFLOW -1

typedef int Status;
typedef char Name[21];
struct Student{
	Name name;		
	int age;		
	float score;	
};
struct Student st[3]={"Mike",16,98,"John",17,65,"Wayne",16,78};

typedef struct Node{
	struct Student data;
	struct Node *next;
}*NodePointer,*LinkList;


Status initList(LinkList *headPointer){
	*headPointer=(LinkList)malloc(sizeof(struct Node));
	if(*headPointer==NULL)
		return ERROR;

	(*headPointer)->next=NULL;
	return OK;
}


int getLength(LinkList head){
	NodePointer p=NULL;
	
	int length=0;
	for(p=head;p!=NULL;p=p->next)
		length++;
	return length;
}


Status getElem(LinkList head,int i,struct Student *e){
	NodePointer p=NULL;
	p=(LinkList) malloc(sizeof(struct Node));
	p = head;
	if(i <= 0 || i > getLength(head)+1)
		return ERROR;
	for(int j = 0; j < i; j++)
		p = p->next;
	*e = p->data;
	return OK;
}


Status insertElem(LinkList head,int i,struct Student e){
	NodePointer p=NULL, s=NULL;
	s=(LinkList) malloc(sizeof(struct Node));
	p=(LinkList) malloc(sizeof(struct Node));
	
	p = head;
	
	if(i<=0 || i > getLength(head)+1)
		return ERROR;

	for(int j = 1; j< i; j++)
		p = p->next;

	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}


Status deleteElem(LinkList head,int i){
	NodePointer s=NULL,p=NULL;
	s=(LinkList) malloc(sizeof(struct Node));
	p=(LinkList) malloc(sizeof(struct Node));
	
	p = head;
	
	if(i<=0 || i > getLength(head)+1)
		return ERROR;

	for(int j = 1; j< i; j++)
		p = p->next;

    s = p->next;
	p->next = s->next;
	free(s);	

	return OK;
}


int main(){
	LinkList head;
	int i,j,k;
	struct Student a={"Steve",19,66},b={"Scott",17,29},t;
	initList(&head);				
	insertElem(head,1,st[0]);
	insertElem(head,2,st[1]);
	insertElem(head,3,st[2]);
	

	for(i=1;i<getLength(head);i++){
		getElem(head,i,&t);
		printf("%s\t%d\t%f\n",t.name,t.age,t.score);
	}

    printf("\n");
	insertElem(head,2,a);	
	insertElem(head,4,b);	
	
	
	for(i=1;i<getLength(head);i++){
		getElem(head,i,&t);
		printf("%s\t%d\t%f\n",t.name,t.age,t.score);
	}

    printf("\n");

	deleteElem(head,4);		
	
	for(i=1;i<getLength(head);i++){
		getElem(head,i,&t);
		printf("%s\t%d\t%f\n",t.name,t.age,t.score);
	}

	deleteElem(head,4);		
	
	printf("\n");

	for(i=1;i<getLength(head);i++){
		getElem(head,i,&t);
		printf("%s\t%d\t%f\n",t.name,t.age,t.score);
	}

	return 0;
}

