#include<stdio.h>
int fact(int num); //prototype
int main()
{
	int f , n;
	printf("enter the number\n");
	scanf("%d",&n);
	f=fact(n);//function cell
	printf("factorial=%d",f);
	
}
int fact(int num)//function definition
{
	if(num==1)
	return(1);
	return(num*fact(num-1));
}

