#include<iostream>
#include <math.h>
using namespace std;

int fisrtoccurance(int arr[], int n, int key){

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

	return ans;
}

int lastoccurance(int arr[], int n, int key){

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





int main()
{


	int even[5]={ 1,2,3,3,5};

	cout<<"fisrtoccurance of 3 at index "<< fisrtoccurance(even,5,3)<<endl;

	cout<<"lastoccurance of 3 at index "<< fisrtoccurance(even,5,3)<<endl;





	
	return 0;
}