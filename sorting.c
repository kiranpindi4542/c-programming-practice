#include<stdio.h>
//swap adjacent, only j
void bubble_sort(int *a,int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
//find min in j loop and swap with i
void selection_sort(int *a,int n){
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}

//insert each element in correct position
void insertion_sort(int *a,int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		int key=a[i],j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
//merge sort
void merge(int *a,int left,int mid, int right){
	int n1,n2;
	n1=mid-left+1;
	n2=right-mid;
	int m1[n1],m2[n2],i,j,k;
	for(i=0;i<n1;i++)
		m1[i]=a[left+i];
	for(j=0;j<n2;j++)
		m2[j]=a[mid+1+j];
	i=0;j=0;k=left;
	while(i<n1 && j<n2){
		if(m1[i]<=m2[j])
			a[k++]=m1[i++];
		else
			a[k++]=m2[j++];
	}
	while(i<n1)
		a[k++]=m1[i++];
	while(j<n2)
		a[k++]=m2[j++];
}
void merge_sort(int *a,int left,int right){
	if(left<right){
		int mid = (left+right)/2;
		merge_sort(a,left,mid);
		merge_sort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}

//quick sort

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int *a,int left,int right){
	int pivot=a[left],i=left+1,j=right;
	while(i<=j){
		while(i<=right && a[i]<=pivot)
			i++;
		while(a[j]>pivot)
			j--;
		if(i<j)
			swap(a+i,a+j);
	}
	swap(a+left,a+j);
	return j;
}

void quick_sort(int *a,int left,int right){
	if(left<right){
		int p=partition(a,left,right);
		quick_sort(a,left,p-1);
		quick_sort(a,p+1,right);
	}
}

int main(){
	int a[5],n=5;
	printf("Enter numbers: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//bubble_sort(a,n);
	//selection_sort(a,n);
	//insertion_sort(a,n);
	//merge_sort(a,0,n-1);
	quick_sort(a,0,n-1);
	printf("After sorting: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
