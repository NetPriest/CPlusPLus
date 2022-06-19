#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main(){
	
	double 	size,
			m=1,
			mm=1000,
			cm=100,
			km=0.001,
			mi=0.000621371192,
			in=39.3700787,
			ft=3.2808399,
			yd=1.0936133;
	
			string m1,m2;
			cin>>size>>m1>>m2;
			
		// for m
		if(m1=="m"){
		size*=m;
		if(m2=="mm"){
			size*=mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="cm"){
			size*=cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="mi"){
			size*=mi;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="in"){
			size*=in;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="km"){
			size*=km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size*=ft;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="yd"){
			size*=yd;
			cout<<setprecision(11)<<size<<endl;
		}else {
			cout<<setprecision(11)<<size<<endl;
		}
		
		//for mm	
		}else if(m1=="mm"){
		if(m2=="m"){
			size/=mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="cm"){
			size=size/mm*cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="mi"){
			size=size/mm*mi;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="in"){
			size=size/mm*in;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="km"){
			size=size/mm*km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size=size/mm*ft;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="yd"){
		size=size/mm*yd;
			cout<<setprecision(11)<<size<<endl;
		}else {
			cout<<setprecision(11)<<size<<endl;
		}
		
		//for cm	
		}else if(m1=="cm"){
		if(m2=="mm"){
				size=size/cm*mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="m"){
				size=size/cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="mi"){
		size=size/cm*mi;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="in"){
		size=size/cm*in;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="km"){
			size=size/cm*km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size=size/cm*ft;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="yd"){
			size=size/cm*yd;
			cout<<setprecision(11)<<size<<endl;
		}else {
			cout<<setprecision(11)<<size<<endl;
		}
		
		//for km	
		}else if(m1=="km"){
		if(m2=="mm"){
			size=size/km*mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="m"){
			size=size/km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="mi"){
			size=size/km*yd;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="in"){
			size=size/km*in;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="cm"){
			size=size/km*cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size=size/km*ft;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="yd"){
			size=size/km*yd;
			cout<<setprecision(11)<<size<<endl;
		}else {
			cout<<setprecision(11)<<size<<endl;
		}
		
		//for mi	
		}else if(m1=="mi"){
		if(m2=="mm"){
			size=size/mi*mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="m"){
			size=size/mi;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="km"){
			size=size/mi*km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="in"){
			size=size/mi*in;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="cm"){
			size=size/mi*cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size=size/mi*ft;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="yd"){
			size=size/mi*yd;
			cout<<setprecision(11)<<size<<endl;
		}else {
			cout<<setprecision(11)<<size<<endl;
		}
		
		//for in	
		}else if(m1=="in"){
		if(m2=="mm"){
			size=size/in*mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="m"){
			size=size/in;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="km"){
			size=size/in*km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="mi"){
			size=size/in*mi;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="cm"){
			size=size/in*cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size=size/in*ft;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="yd"){
			size=size/in*yd;
			cout<<setprecision(11)<<size<<endl;
		}else {
			cout<<setprecision(11)<<size<<endl;
		}
		
		//for yd	
		}else if(m1=="yd"){
		if(m2=="mm"){
			size=size/yd*mm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="m"){
			size=size/yd;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="km"){
			size=size/yd*km;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="mi"){
			size=size/yd*mi;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="cm"){
			size=size/yd*cm;
			cout<<setprecision(11)<<size<<endl;
		}else if(m2=="ft"){
			size=size/yd*ft;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="in"){
			size=size/yd*in;
			cout<<setprecision(16)<<size<<endl;
		}else {
			cout<<setprecision(16)<<size<<endl;
		}
		
		//for ft	
		}else if(m1=="ft"){
		if(m2=="mm"){
			size=size/ft*mm;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="m"){
			size=size/ft;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="km"){
			size=size/ft*km;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="mi"){
			size=size/ft*mi;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="cm"){
			size=size/ft*cm;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="yd"){
			size=size/ft*yd;
			cout<<setprecision(16)<<size<<endl;
		}else if(m2=="in"){
			size=size/ft*in;
			cout<<setprecision(16)<<size<<endl;
		}else {
			cout<<setprecision(16)<<size<<endl;
		}
		return 0;
	}	
}
