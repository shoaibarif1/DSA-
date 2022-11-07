#include <iostream>

int fisrtoccurance(int arr, int n, int key){

    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans = -1;


    while(start<=end){
     if(arr[mid]==key){

            ans =mid;
            end = mid - 1;
        }

        else if(key>arr[mid]){

            start = mid + 1;

        }

        else if(key<arr[mid]){

            end = mid - 1;
        }

        mid = start+(end-start)/2;
    }
    int lastoccurance(int arr, int n, int key){

    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<=end){


        if(arr[mid]==key){

            ans =mid;
            end = mid - 1;


        }

        else if(key>arr[mid]){

            start = mid + 1;



        }

        else if(key<arr[mid]){

            start = mid + 1;


        }


        mid = start+(end-start)/2;
    }

    return ans;
}


pair<int, int> firstAndLastPosition(int arr, int n, int k)
{
   pair<int,int> p;
    p.first = firstoccurance(int arr, int n, int key);
    p.last = lastoccurance(int arr, int n, int key);
    retrun p;
}