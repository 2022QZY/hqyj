

#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	char name[20];
	int id;
	int year;
	
} stu;

typedef struct Node {
	stu data;
	struct Node* next;
}Node;


typedef struct LinkList
{
	Node * head;
}LinkList;


void add_tail_LinkList(LinkList *L,stu data);
void Print_Linklist(LinkList *L);
int main ()
{
	stu student={"zhang",03,20};
		stu student1={"wang",03,20};
	LinkList * L=(LinkList*)malloc(sizeof(LinkList));
	L->head=NULL;
	Node * new_node=(Node*)malloc((sizeof(Node)));
	if(new_node==NULL){
		printf("节点创建失败\n");
		
	}
	new_node->next=NULL;
	new_node->data=student;

	
	L->head=new_node;
	add_tail_LinkList(L,student1);
Print_Linklist(L);
	return 0;
}


void add_tail_LinkList(LinkList *L,stu data_1)
{
	if(L==NULL){
		printf("表为null\n");
		return ;
	}
	

	Node * new_node=(Node*)malloc((sizeof(Node)));
	if(new_node==NULL){
		printf("节点创建失败\n");
		
	}
	new_node->next=NULL;
	new_node->data=data_1;
	
	if(L->head==NULL){
		L->head=new_node;
		return ;
		
	}
	
	Node* temp=L->head;
	while(temp->next !=NULL){
		temp =temp->next;
	}
	temp->next=new_node;
	return ;

	
	
}
void Print_Linklist(LinkList *L)
{
	Node * new_node=(Node*)malloc((sizeof(Node)));
	if(new_node==NULL){
		printf("节点创建失败\n");
		
	}
	new_node =L->head;
	while(new_node !=NULL){
		//TODO
		
			printf("%s %d %d\n",new_node->data.name,new_node->data.id,new_node->data.year);
		new_node=new_node->next;
	}
	
	
}
