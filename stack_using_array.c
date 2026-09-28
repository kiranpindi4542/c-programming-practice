#include<stdio.h>
#define SIZE 5
int top=-1,stack[SIZE];
void push(int data){
	if(top==SIZE-1){
		printf("Stack Overflow\n");
		return;
	}
	stack[++top]=data;

}
void pop(){
	if(top==-1){
		printf("Stack Underflow\n");
		return;
	}
	stack[top--]=0;
}
void display(){
	if(top==-1)
		printf("Stack is empty\n");
	printf("Elements in stack are:");
	for(int i=0;i<=top;i++)
		printf("%d ",stack[i]);
	printf("\n");
}
int main(){
	int top=-1,stack[SIZE];
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
