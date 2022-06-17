#include<iostream>

using namespace std;

int main(){
	int days;
	double dailyWage,vat,salary,yearlySalary;
	cin>>days>>dailyWage>>vat;
	salary=days*dailyWage;
	yearlySalary=salary*12+salary*2.5;
	yearlySalary=yearlySalary-yearlySalary*0.25;
	yearlySalary*=vat;
	yearlySalary/=365;
	
	printf("%.2f",yearlySalary);
	
}
