#include<stdio.h>
int fact (int num);
main()
{
	int f, n;
	printf("enter a number");
	scanf("%d",n);
	f=fact(n);
	printf("factorial=%d",f);


}

int fact(int num)
{
	if(num==1)
	return(1);
	return(num*fact(num-1));
}


