/*Find the sum of the arr[] elements*/

#include<iostream>

using namespace std;

int main(){
	
	const int e=10;
	int arr[e] ={10,9,8,7,6,5,4,3,2,1};
	
	int sum=0;
	
	for(int i=0;i<e;i++){
		sum+=arr[i];
	}
	cout<<"The sum of the elements is: "<<sum;
	return 0;
}
