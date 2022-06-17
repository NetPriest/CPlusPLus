#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

	double bgn,usd;
	cin >> usd;
	bgn=usd*1.79549;
	cout<<fixed<<setprecision(2)<<bgn<<" BGN";
	
	return 0;	
}
