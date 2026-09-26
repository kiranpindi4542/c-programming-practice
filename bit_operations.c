#include<stdio.h>
void binary();
int set_bit(int num,int pos){
	return num | (1<<pos);
}
int clear_bit(int num, int pos){
	return num & (~(1<<pos));
}

int toggle_bit(int num,int pos){
	return num ^ (1<<pos); 
}

int swap_bits(int num,int pos1,int pos2){
	int bit1= (num>>pos1)&1;
	int bit2= (num>>pos2)&1;
	if(bit1!=bit2){
		num = num ^ (1<<pos1);
		num = num ^ (1<<pos2);
	}
	return num;
}
int main(){
	int pos1,pos2,num,choice;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("1.Set\n2.Clear\n3.Toggle\n4.Swap pos1,pos2 \nChoice:");
	scanf("%d",&choice);
	printf("Before operation value ");
	binary(num);
	switch(choice){
		case 1: printf("Enter position: ");
			scanf("%d",&pos1);
			num=set_bit(num,pos1);
			break;
		case 2: printf("Enter position: ");
			scanf("%d",&pos1);
			num=clear_bit(num,pos1);
			break;
		case 3: printf("Enter position: ");
			scanf("%d",&pos1);
			num=toggle_bit(num,pos1);
			break;
		case 4: printf("Enter position pos1 pos2: ");
			scanf("%d %d",&pos1,&pos2);
			num=swap_bits(num,pos1,pos2);
			break;
		default: printf("Wrong choice\n");
			 break;
	}
	printf("After operation value ");
	binary(num);
	return 0;
}
