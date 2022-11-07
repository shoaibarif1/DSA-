#include<stdio.h>
int main()
{
	int n[6]={123,23,54,21,46,62};
	int i, big= -32767;
	for(i=0;i<6;i++)
	{
		if(n[i]>big)
		{big=n[i];
		
		}
	}
	printf("largest number in n is %d",big);
	return 0;
}
