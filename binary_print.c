#include<stdio.h>
void binary(int num){
	for(int i=(sizeof(int)*8)-1;i>=0;i--){
		printf("%d",(num>>i)&1);
		if((i)%8==0)
			printf(" ");
	}
	printf("\n");
}
