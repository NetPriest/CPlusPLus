#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	
	double v;
	double p1;
	double p2;
	double h;
	
	cin>>v>>p1>>p2>>h;
	
	double debitp1=p1*h;
	double debitp2=p2*h;
	double totalDebit=debitp1+debitp2;
	
	if(totalDebit<=v){
		double percent=totalDebit/(v/100);
		double perp1=debitp1/(totalDebit/100);
		double perp2=debitp2/(totalDebit/100);
		
		cout<<"The pool is "<<(int)percent<<"% full. Pipe 1: "<<(int)perp1<<"%. Pipe 2:"<<(int)perp2<<"%."<<endl;
	}else {
		double d=totalDebit-v;
		cout<<"For "<<h<<" hours the pool overflows with "<<d<<" liters"<<endl;
	} 
	
	
}
