#include<stdio.h>
int binary_search(int *a,int n,int elem){
	int i=0,j=n-1,mid;
	while(i<=j){
		mid=(i+j)/2;
		if(elem==a[mid])
			return mid;
		else if(elem>a[mid])
			i=mid+1;
		else
			j=mid-1;
	}
	return -1;

}
int main(){
	int a[10],n,elem,index;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter Numbers: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter element to search: ");
	scanf("%d",&elem);
	index=binary_search(a,n,elem);
	if(index==-1)
		printf("Not found\n");
	else
		printf("Found at index %d\n",index);
	return 0;
}
