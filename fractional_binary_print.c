#include<stdio.h>
union bin{
	float f;
	int a;
};
void binary(union bin u1){
	for(int i=(sizeof(float)*8)-1;i>=0;i--){
		printf("%d",((u1.a)>>i)&1);
		if((i)%8==0)
			printf(" ");
	}
	printf("\n");
}
int main(){
	union bin u1;
	printf("Enter fractional number: ");
	scanf("%f",&u1.f);
	printf("Binary of %f is ",u1.f);
	binary(u1);
	return 0;
}
