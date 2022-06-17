#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int n;
	string dayOrNight;
	cin>>n>>dayOrNight;
	double taxiTaxPerKM=0;
	double busTaxPerKM=n*0.09;
	double trainTaxPerKM=n*0.06;
	double totalPrice=0;

	
	
	if(dayOrNight=="day"){
		taxiTaxPerKM=0.79;
	}else {	
		taxiTaxPerKM=0.90;
	} 
	
	if(n<20){
		totalPrice=0.70+n*taxiTaxPerKM;
	}else if (n<100){
		totalPrice=n*0.09;
	}else {
		totalPrice=n*0.06;
	}
	cout<<totalPrice<<endl;
	
}
