#include <stdio.h>

int main()

{


	int arr[100],size,i,sum =0 ;

	printf("Enter Array Size\n");

	scanf("%d",&size);

	printf("Enter Array element\n")

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&arr[i]);

		for (int i = 0; i < size; ++i)
		{
			sum = sum + arr[i];


		}

        printf("sum of the Array = %d\n",sum);
	}


	return 0;
	
}