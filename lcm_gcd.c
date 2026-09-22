#include<stdio.h>
int cal_gcd(int a,int b){
	int temp;
	while(a%b){
		temp=a%b;
		a=b;
		b=temp;
	}
	return b;
}
int main(){
	int a,b,gcd,lcm;
	printf("Enter Numbers: ");
	scanf("%d %d",&a,&b);
	gcd=cal_gcd(a,b);
	lcm=a*b/gcd;
	printf("lcm=%d gcd=%d\n",lcm,gcd);
}
