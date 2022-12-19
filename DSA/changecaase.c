#include<stdio.h>
int main(){
    char A[]="WElCOmE";
    int i;
    for(i=0;A[i]!='\0';i++)
   /* {
        A[i]=A[i]+32; //for normal casechange 
    }*/
    {
        if(A[i]>=65 && A[i]<=90)
        A[i]+=32;
        else if(A[i]>=97 && A[i]<=122) //for both change in one case
        A[i]-=32;
    }
    printf("%s",A);
}