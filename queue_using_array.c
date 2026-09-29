#include<stdio.h>
#define SIZE 5
int queue[SIZE],front=-1,rear=-1;

void push(int data){
	if(rear+1==SIZE)
		printf("Queue is full\n");
	if(front==-1)
	{
		++front;
		queue[++rear]=data;
		return;
	}
	queue[++rear]=data;
}

void pop(){
	if(front==-1 | front>rear)
		printf("Queue is empty\n");
	queue[front++]=0;
}
void display(){
	if(front==-1 || front>rear)
		printf("Queue is empty\n");
	printf("Elements are: ");
	for(int i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
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
