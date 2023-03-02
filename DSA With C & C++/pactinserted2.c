#include<stdio.h>
int main()
{
  int a[40] ,i, size,i,num,pos;
  printf("enter no. of element array":);
  scanf("%d",&size);

  printf("enter %d elements are",size);
  for(i=o;i<size;i++)
  scanf("%d"&a[i]);

 
  printf("enter position");
  scanf("%d",&pos);

   printf("enter data you want to insert:");
  scanf("%d",&num);

  for(i=size-1;i>=pos-1;i--)
  
    a[i+1]=a[i];
    a[pos-1]=num;
    size++;

    printf("final array after inserting the value is:");
    for(i=0;i<=size;i++)

       printf("%d",a[i]);
       return 0;
    
  
}