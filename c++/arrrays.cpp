#include<stdio.h>
int main() { 
	int arr[6]={121,32,54,21,46,62};
	int i, big=-32767;
	for(i=0;i<6;i++)
	{
		if(arr[i]>big)
		{big=arr[i];
		}
	}
printf("the largest number in array is %d",big);
return 0;		
}


