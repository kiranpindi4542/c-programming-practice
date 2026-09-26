#include<stdio.h>

int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d",&n);
	if(!(n&(n-1)))
		printf("Power of 2\n");
	else
		printf("Not power of 2\n");
	return 0;
}
