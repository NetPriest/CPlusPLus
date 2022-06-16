/*Reverse the arr[] elements*/

#include<iostream>
using namespace std;

int main(){
	const int e=11;
	int arr[e]={10,9,8,7,6,5,4,3,2,1,0};
	
	for(int i=0;i<e/2;i++){
		
		int revInx=e-i-1;
		int currInx=arr[i];
		arr[i]=arr[revInx];
		arr[revInx]=currInx;
		
		//we could swap the above with
		//swap(arr[i],arr[revInx]);
		cout<<"arr now is: "<<arr[i]<<endl;
	}
	return 0;
}
