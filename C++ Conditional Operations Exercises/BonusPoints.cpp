#include<iostream>

using namespace std;

int main(){
	
	int np;
	double bp=0;
	cin>>np;
	
	if(np%2==0){
		bp+=1;
	}else if(np%10==5){
		bp+=2;
	}else bp=0;
	
	if(np<=100){
		bp+=5;
		cout<<bp<<endl;
		cout<<np+bp<<endl;
	}else if(np>=100&&np<=1000){
		bp+=np*0.20;
		cout<<bp<<endl;
		cout<<np+bp<<endl;
	}else {
		bp+=np*0.10;
		cout<<bp<<endl;
		cout<<np+bp<<endl;
	}
	
	return 0;
}
