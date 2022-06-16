/*Make a program that adds a double array, initialized in the program.
	The program should print all whole numbers
*/

#include<iostream>
using namespace std;

int main(){
	
	int n=6;
	double arr[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter whole and decimal numbers: "<<endl;
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++) 
	{
		if(arr[i]%1==0)
		{
		cout<<arr[i]<<"is whole number"<<endl;
		}
	}
	
	return 0;
}
