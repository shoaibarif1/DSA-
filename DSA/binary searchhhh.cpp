#include<iostream>
#include <math.h>
using namespace std;


int binarysearch(int arr[], int size , int key){

	int start = 0;

	int end = size-1; //size=n

	//int mid = (start + end)/2;
	int mid = start + (end - 2)/2;


	while(start <= end){

		if (arr[mid] == key)
		{
			return mid;
		}

//go to righht part

		if (key > arr[mid])
		{
			start = mid  + 1;




		}

		else{//if key<arrmid

			end = mid - 1;
		}


		//mid = ( start+end)/2;
	     mid = start + (end - 2)/2;




	}

	return -1;





}

int main(){


int even[6] = {2,4,6,8,12,18};
int odd[5] = {3,8,11,14,16};

int index = binarysearch(even ,6,18);

cout<< "Index of 18 is" << index << endl;

}