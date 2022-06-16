/*Array with 20 elements is given. The elements can only be 0 and 1
  Make a program that calls the count of oly the ones in the array
*/

#include<iostream>

using namespace std;

int main(){
	
	int e=20;
	int arr[e];
	int count=0;
	
	for(int i=0;i<e;i++){
		cout<<"Enter number between 0 and 1: "<<endl;
		cin>>arr[i];
	}
	
	for(int i=0;i<e;i++){
		if(arr[i]==1)
		{
			count++;
		}
	}
	cout<<"The count of 1 is: "<<count<<endl;
	
	return 0;
	
}
