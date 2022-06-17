#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int main(){

	double curr;
	double USD=1.79549;
	double EUR=1.95583;
	double GPB=2.53405;
	string currType,convertType;
	cin >>curr>>currType>>convertType;
	
	//USD to other Currencies
	//We multiply the curr by USD/EUR/GPB and then divide it by USD/EUR/GPB to recieve the converted curr
	if(currType=="USD"){
		if(convertType=="BGN"){
			cout<<fixed<<setprecision(2)<<curr*USD<<" BGN";
		}else if(convertType=="EUR"){
			cout<<fixed<<setprecision(2)<<curr*USD/EUR<<" EUR";
		}else cout<<fixed<<setprecision(2)<<curr*USD/GPB<<" GPB";
	
	//BGN to other Currencies
	//We devide the curr to recieve the converted curr	
	}else if(currType=="BGN"){
		if(convertType=="USD"){
			cout<<fixed<<setprecision(2)<<curr/USD<<" USD";
		}else if(convertType=="EUR"){
			cout<<fixed<<setprecision(2)<<curr/EUR<<" EUR";
		}else cout<<fixed<<setprecision(2)<<curr/GPB<<" GPB";
	
	//EUR to other Currencies
	//We multiply the curr by USD/EUR/GPB and then divide it by USD/EUR/GPB to recieve the converted curr		
	}else if(currType=="EUR"){
		if(convertType=="BGN"){
			cout<<fixed<<setprecision(2)<<curr*EUR<<" BGN";
		}else if(convertType=="USD"){
			cout<<fixed<<setprecision(2)<<curr*EUR/USD<<" USD";
		}else cout<<fixed<<setprecision(2)<<curr*EUR/USD<<" GPB";
		
	//GPB to other Currencies
	//We multiply the curr by USD/EUR/GPB and then divide it by USD/EUR/GPB to recieve the converted curr	
	}else if(currType=="GPB"){
		if(convertType=="BGN"){
			cout<<fixed<<setprecision(2)<<curr*GPB<<" BGN";
		}else if(convertType=="USD"){
			cout<<fixed<<setprecision(2)<<curr*GPB/USD<<" USD";
		}else cout<<fixed<<setprecision(2)<<curr*GPB/EUR<<" EUR";
		}
		
	return 0;	
}
