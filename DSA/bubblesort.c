#include<stdio.h>
void print array(int*a,int n){
    for(i=o;i<n;i++)
    {
        printf("%d",a[i]);

    }


}
void bubble sort(int*a,int n);
{
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;


        }
        }
    }
}
int main()
{
    int A[]={12,5,3,6,7};
    int n=5;
    print array(A,n);
    bubble sort(A,n);
    print array(A,n);
    return 0;
}