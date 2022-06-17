#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double w,l,numTiles,timeToPlace,tileNeed,areaBench,area,coverArea,tileArea;
	int n,m,o;
	
	cin>>n>>w>>l>>m>>o;
	area=n*n;
	areaBench=m*o;
	coverArea=area-areaBench;
	tileArea=w*l;
	tileNeed=coverArea/tileArea;
	timeToPlace=tileNeed*0.2;
	cout<<setprecision(11)<<tileNeed<<endl;
	cout<<setprecision(11)<<timeToPlace<<endl;

	return 0;
}
