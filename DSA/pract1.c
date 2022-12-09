#include<stdio.h>
void main()
{
  int i, size;
    int arr[]={2,10,20,16,5};
    size=sizeof(arr)/sizeof(arr[0]);

    printf("the array element are:");

    for( i = 0; i < size; i++)
    {
    printf("\narr[%d]=%d",i,arr[i]);
    }
    

}