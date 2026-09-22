#include<stdio.h>
#include<math.h>
int leap_year(int year){
	if( year%100 == 0)
		return !(year%400);
	else 
		return !(year%4);
}
int main(){
	int year;
	printf("Enter Year: ");
	scanf("%d",&year);
	if(leap_year(year))
		printf("Leap Year\n");
	else
		printf("Not a leap year\n");
	int s=pow(year,2);
	printf("s=%d\n",s);
	return 0;
}
