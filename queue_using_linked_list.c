#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *front=NULL,*rear=NULL;
void push(int data){
	struct node *new=calloc(1,sizeof(struct node));
	new->data=data;
	if(front==NULL){
		front=new;
		rear=new;
		return;
	}
	rear->link=new;
	rear=new;
}

void pop(){
	if(front==NULL){
		printf("Queue is empty\n");
	}
	if(front==rear){
		free(front);
		front=NULL;
		rear=NULL;
	}
	struct node *temp;
	temp=front;
	front=front->link;
	free(temp);
}	
void display(){
	if(front==NULL)
		printf("Queue is empty\n");
	printf("Elements are: ");
	struct node *temp=front;
	while(temp!=rear){
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("%d\n",temp->data);
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
