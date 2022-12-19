#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
	int temp =*x;
	*x=*y;
	*y=temp;
}
void bubble(int A[],int n)
{
int i,j;
for(i=0;i<n-1;i++){

for(j=0;j<n-i-1;j++)
{
	if(A[i]>A[j])
	swap(&A[i],&A[j]);
}
}
	
}
int main(){
	int A[]={11,13,14,16,9,5,34,24,6,15},n=10,i;
	bubble(A,n);
	for(i=0;i<10;i++)
	printf("%d ",A[i]);
	printf("\n");
	return 0;
}