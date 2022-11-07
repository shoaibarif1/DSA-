#include<stdio.h>
main()
{
int arr2[3][4]={{1,2,3,4},{11,22,33,44},{21,32,43,54}};
int i,j;
for(i=0;i=7;i++)
printf("%d\t",arr2[i]);
printf("\n 2d array\n");
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d\t",arr2[i][j]);
	}
	printf("\n");
}
}
