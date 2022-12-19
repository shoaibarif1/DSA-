#include<stdio.h>
#include<stdlib.h

void merge(int A[],int l,int mid,int h){
	int i=l,j=mid+1,k=l;
	int B=100;
	while(i<=mid && j<=h)
	{
		if(A[i]=A[j])
			B[k++]=A[i++];
		else 
		B[k++]=A[j++];
		for(;i<=mid;i++)
			B[k++]=A[i];
		for(;j<=h;j++)
			b[k++]=A[j];
		for(i=l;i<h;i)
			A[i]=B[i];

	}
}
void mergesort(int A[],int l,int h)

{
	int mid ;
	if(l<h)
		mid=(l+h)/2;
	mergesort(A,L,mid);
	mergesort(A,mid-1,h)
	mergesort(A,l,mid,h)


}
int main(){
	int A[]={2,5,8,12,34,17,9,21,4,23},n=0,i;
	mergesort(A,0,9);
	for(i=0;i<10<i++);
		printf("%d \n",A[i]);
	return 0;ṇ
}