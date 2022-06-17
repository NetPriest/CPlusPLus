#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

	double rad,deg;
	cin >> rad;
	deg=rad*57.29578;
	cout<<fixed<<setprecision(2)<<round(deg);
	
	return 0;	
}
