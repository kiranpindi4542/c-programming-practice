#include<stdio.h>
void fibanocci(int n){
	int a=0,b=1,c;
	printf("%d %d ",a,b);
	n=n-2;
	while(n--){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	printf("\n");
}

int main(){
	int n;
	printf("Enter numbers to print: ");
	scanf("%d",&n);
	printf("Fibanocci series: ");
	fibanocci(n);
}
