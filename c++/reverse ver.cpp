#include<stdio.h>
int main() {
int n;
printf("enter the number of element you want to reverse; \n");
scanf("%d",&n);
int a[n];
int i;
printf("enter all the %d element: \n", n);
for(i=0, i<n; i++)
{
	scanf("%d", &a[i]);
	
}
printf("element in reverse order are : \n");
for(i=n-1; i>0; i--)
{
	printf("%d",a[i]);
	
}
return0;
}
