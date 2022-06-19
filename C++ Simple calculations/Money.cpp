#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	double y,
	com,
	ytotalbgn,
	btctotalbgn,
	totalbgn,
	result;
	int btc;
	
	cin>>btc>>y>>com;
	
	btctotalbgn=btc*1168;
	ytotalbgn=(y*0.15)*1.76;
	totalbgn=(btctotalbgn+ytotalbgn)/1.95;
	result=totalbgn-totalbgn*(com/100);
	
	printf("%.2f",result);

	return 0;
}
