#include<stdio.h>
void reverse_int(int *num){
	int sum=0,rem;
	while(*num){
		rem=*num%10;
		sum=sum*10+rem;
		*num=*num/10;
	}
	*num=sum;
}
//below is diff
int reverse_int_rec(int n,int rev){
	if(n==0)
		return rev;
	return reverse_int_rec(n/10,rev*10+n%10);
}
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	num=reverse_int_rec(num,0);
	printf("After reverse %d\n",num);
	return 0;
}
