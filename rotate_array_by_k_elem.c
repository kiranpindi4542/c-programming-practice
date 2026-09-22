#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int n)
{
	int temp;
	for(int i=0,j=n-1;i<j;i++,j--){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
int main(){
	int *arr,n,k;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));

	printf("Enter elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Rotate by: ");
	scanf("%d",&k);
	//algorithm to rotate
	reverse(arr,n);//reverse entire array
	reverse(arr,k);//reverse 1st k elements
	reverse(arr+k,n-k);//reverse n-k elements
	printf("After rotation: ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
