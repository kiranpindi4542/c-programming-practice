#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *top=NULL,*head=NULL;
void push(int data){
	struct node *new=calloc(1,sizeof(struct node));
	new->data=data;
	new->link=top;
	top=new;
	printf("%d added\n",new->data);
}
void pop(){
	if(top==NULL){
		printf("stack is empty\n");
		return;
	}
	struct node *temp;
	temp=top;
	top=top->link;
	free(temp);
}
void display(){
	struct node *temp=top;
	if(top==NULL){
		printf("Stack is empty\n");
		return;
	}
	printf("Elements are: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	pop();
	pop();
	display();
	return 0;
}
