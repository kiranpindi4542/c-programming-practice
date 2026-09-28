#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node* add_node(struct node *head,int data){
	struct node *new = calloc(1,sizeof(struct node));
	new->data = data;
	new->link = NULL;
	if(!head)
		return new;
	struct node *ptr=head;
	while(ptr->link)
		ptr=ptr->link;
	ptr->link=new;
	return head;	
}

struct node* delete_node(struct node *head,int index){
	struct node *prev=head,*curr=head;
	if(!head){
		printf("List is empty\n");
		return head;
	}
	if(index==0){
		struct node *ptr=head;
		head=head->link;
		free(ptr);
		return head;
	}
	while((curr->link)&&index){
		prev=curr;
		curr=curr->link;
		index--;
	}
	prev->link=curr->link;
	printf("%d element is deleted\n",curr->data);	
	free(curr);
	return head;
}
void display(struct node *head){
	if(!head)
	{
		printf("List is empty\n");
		return;
	}
	struct node *ptr=head;
	printf("Elements are: ");
	while(ptr->link){
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("%d \n",ptr->data);
}
struct node* insert_at_index(struct node *head,int data,int index){
	struct node *new= calloc(1,sizeof(struct node)),*prev=head,*curr=head;
	new->data=data;
	if(!head)
		return new;
	if(!index)
	{
		new->link=head;
		return new;
	}
	while((curr->link)&&index){
		prev=curr;
		curr=curr->link;
		index--;
	}
	//handling adding at end
	if(!curr->link && index){
		curr->link = new;
		return head;
	}
	prev->link = new;
	new->link = curr;
	return head;
}
struct node* reverse_list(struct node* head){
	struct node *curr=head,*prev=NULL,*next=NULL;
	while(curr){
		next = curr->link;
		curr->link = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}
void middle_element(struct node *head){
	struct node *slow=head,*fast=head;
	while(fast && fast->link){
		slow=slow->link;
		fast=fast->link->link;
		//if(slow==fast) => If true then loop in list
		//To detect loop in a list
	}
	printf("Middle element is %d\n",slow->data);
}

void nth_node_from_end(struct node *head,int n){
	struct node *first=head,*second=head;
	int temp=n;
	while(temp--){
		first=first->link;
	}
	while(first){
		first=first->link;
		second=second->link;
	}
	printf("%dth node from end is %d\n",n,second->data);
}
int main(){
	struct node *head=NULL;
	int choice,index,data,n;

	while(1){
		printf("1.Add node\n2.delete a node at given index\n3.Display elements\n4.insert at given index\n5.Reverse linked list\n6.Middle element\n7.nth node from end\n8.exit\n");
		printf("Enter Choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:	printf("Enter data:");
				scanf("%d",&data);
				head=add_node(head,data);
				break;
			case 2: printf("Enter index:");
				scanf("%d",&index);
				head=delete_node(head,index);
				break;
			case 3: display(head);
				break;
			case 4: printf("Enter index: ");
				scanf("%d",&index);
				printf("Enter data:");
				scanf("%d",&data);
				head=insert_at_index(head,data,index);
				break;
			case 5: head=reverse_list(head);
				break;
			case 6: middle_element(head);
				break;
			case 7:	printf("Enter n:");
			        scanf("%d",&n);
				nth_node_from_end(head,n);
				break;
			case 8: printf("Program end\n");
				return 0;
			default: printf("Wrong choice\n");
		}
	}
	return 0;
}
