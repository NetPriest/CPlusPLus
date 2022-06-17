#include<iostream>

using namespace std;

int main(){
	double l,w,rows,columns,seats;
	
	cin>>l;
	cin>>w;
	l*=100;
	w*=100;
	rows=(int)l/120;
	columns=((int)w-100)/70;
	seats=rows*columns-3;
	
	cout<<seats<<endl;

	return 0;
}
