#include<stdio.h>
#include<stdlib.h>
int strlength(char *str){
	int i=0;
	while(str[i++]);
	return i-1;
}
void reverse(char *str){
	int i=0,len=strlength(str);
	char temp;
	printf("length=%d\n",len);
	while(i<len/2){
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
		i++;
	}
}
int main(){
	char *str;
	str = malloc(10*sizeof(char));
	//str = calloc(10,sizeof(char));
	str = realloc(str,20);
	printf("Enter string: ");
	scanf("%s",str);
	reverse(str);
	printf("Reversed string: %s\n",str);
}
