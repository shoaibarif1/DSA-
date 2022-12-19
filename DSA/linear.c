
int linear search(struct array arr,int key){
    int i ;
    for(i=0;i<array.length;i++)
    {
        if(key==arr.A[i])
        return i;
    }
    return -1;
}

int main()
{
    struct Array arr={{2,3,4,5,6}10,5};
    printf("%d\n",linearsearch(arr,3))

    
    display (arr);
    return 0;




}