#include<stdio.h>
int main()
{
	int arr[10];
	int i,small=-32767;
	printf("enter elements of array");

	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<10;i++)
	{
		if(arr[i]>small)
		{small=arr[i];
		
		}
	}
	printf("the smallest number in array is %d",small);
	return 0;
	
}
