#include<stdio.h>
#include "binary_print.h"
//void binary(int);//just this also will work instead of above header
//multi file compilation, must compile with binary_print.c
int count_set_bits(int n){
	int count=0;
	while(n){
		n=n&(n-1);//clearing least set bit in every iteration
		count++;
	}
	return count;
}
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	binary(n);
	printf("Number of set bits in %d is %d\n",n,count_set_bits(n));
	return 0;
}
