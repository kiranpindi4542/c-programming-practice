#include<stdio.h>

void little_big_endian(){
	int a=0x12345678;
	char *ch=&a;
	if(*ch==0x78)
		printf("Little Endian %x\n",*ch);
	else
		printf("Big Endian %x\n",*ch);
}

void little_big_endian_union(){
	union u1{
		int a;
		char ch;
	}u1;
	u1.a=1;
	if(u1.ch==1)
		printf("Little Endian %x\n",u1.ch);
	else
		printf("Big Endian %x\n",u1.ch);
}
int main(){
	little_big_endian();
	little_big_endian_union();
}
