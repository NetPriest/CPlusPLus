#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double n,m,total;
	int kgz,kgp;
	
	cin>>n>>m>>kgz>>kgp;
	total=(n*kgz+m*kgp)/1.94;
	cout<<setprecision(15)<<total<<endl;

	return 0;
}
