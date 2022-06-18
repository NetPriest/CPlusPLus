#include<iostream>

using namespace std;

int main(){
	
	int np;
	double bp=0.0f;
	cin>>np;

	
		if(np<100)
		{
			bp+=5;
			if(np%2==0){
			bp+=1;
			cout<<bp<<endl;
			cout<<np+bp<<endl;
		}else if(np%2==1){
			bp+=2;
			cout<<bp<<endl;
			cout<<np+bp<<endl;
				
			}
			
		}else if(np>100)
		{
			bp+=np*0.20f;
			if(np%2==0){
			bp+=1;
			cout<<bp<<endl;
			cout<<np+bp<<endl;
		}else if(np%2==1){
			bp+=2;
			cout<<bp<<endl;
			cout<<np+bp<<endl;
				
			}
			
		}else if(np>1000)
		{
			bp+=np*0.10f;
			if(np%2==0){
			bp+=1;
			cout<<bp<<endl;
			cout<<np+bp<<endl;
			
			}else if(np%2==1){
			bp+=2;
			cout<<bp<<endl;
			cout<<np+bp<<endl;
				
			}
		}	return 0;
	}
