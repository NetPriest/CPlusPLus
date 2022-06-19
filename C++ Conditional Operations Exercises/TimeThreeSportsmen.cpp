#include<iostream>

using namespace std;

int main(){
	
	int t1,t2,t3,min=0;
	cin>>t1>>t2>>t3;
	int sec=t1+t2+t3;
	
	if(sec<10){
		cout<<min<<":"<<"0"<<sec<<endl;
		
	}else if(sec>=10&&sec<=59){
		cout<<min<<":"<<sec<<endl;
		
	}else if(sec>=60&&sec<=119){
		min++;
		sec-=60;
		if(sec<10)
		{
			cout<<min<<":"<<"0"<<sec<<endl;
		}else {
			cout<<min<<":"<<sec<<endl;
		}
	}else if (sec>=120&&sec<=179){
			++min+=1;
			sec-=120;
			if(sec<10)
			{
				cout<<min<<":"<<"0"<<sec<<endl;
			}else {
				cout<<min<<":"<<sec<<endl;
			}
	}
	return 0;
}
