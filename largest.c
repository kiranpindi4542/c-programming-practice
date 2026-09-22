#include<stdio.h>
int largest(int *a,int *b, int *c){
	if((*a>*b)&&(*a>*c))
		return *a;
	else if(*b>*c)
		return *b;
	else
		return *c;
}

int main(){
	int a,b,c,l;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Entered numbers: %d %d %d\n",a,b,c);
	l=largest(&a,&b,&c);
	printf("largest is %d\n",l);
	return 0;
}
