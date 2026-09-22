#include<stdio.h>
//12001 to 12111
//0 to 1 in a given integer
int convert(int num){
	int pos=1,rem,res;
	while(num){
		rem=num%10;
		if(rem)
			res=res+rem*pos;
		else
			res=res+1*pos;
		pos=pos*10;
		num=num/10;
	}
	return res;
}
int main(){
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	num=convert(num);
	printf("Result: %d\n",num);
}
