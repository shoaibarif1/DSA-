#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;

};
//traversal
void linkedlistTraversal(struct node *ptr){

	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr =ptr ->next;

	}

} 
//CASE1
struct node *  insertAtFirst(struct node*head,int data){
	struct node *ptr =(struct node*)malloc(sizeof(struct node));
	ptr->data =data;
	ptr->next=head;
	return ptr;
}

//CASE2

struct node *  insertAtIndex(struct node*head,int data,int index){
	struct node *ptr =(struct node*)malloc(sizeof(struct node));
	struct node*p=head;
	int i=0;
	while(i!=index-1) 
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;

}


struct node *  insertAtEnd(struct node*head,int data){
	struct node *ptr =(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=head;
	while(p->next!=NULL){
		p->next=ptr;
		ptr->next=NULL;
		return head;
	}





int main(){
	struct node * head;
	struct node * second;
	struct node * third;
	struct node * fourth;

	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	head->data= 7;
	head->next=second;
	second->data= 11;
	second->next=third;
	third->data= 41;
	third->next=fourth;
	fourth->data= 66;
	fourth->next= NULL;

	linkedlistTraversal(head);
	//head=insertAtFirst(head,56);
	//head=insertAtIndex(head,56,1);
	head=insertAtEnd(head,56);
	return 0;
}

	


