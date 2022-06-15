/* Movies
In a movie theater, the chairs are arranged in a rectangular
shape in r rows and c columns. There are three types of 	
screenings with tickets at different prices:

Premiere - premiere screening, at a price of BGN 12.00.
Normal - standard screening, at a price of BGN 7.50.
Discount - screening for children, pupils and students at a reduced price of BGN 5.00.

Write a program that reads the type of projection (string),
number of rows and number of columns in the hall (integers)
entered by the user, and calculates the total ticket revenue
for a full hall. Print the result in the format as in the 
examples below, 2 characters after the decimal point.*/


#include<iostream>
#include <iomanip>
#include<string>

using namespace std;

int main(){
	int r,c;
	double revenue;
	string tiketType;
	
	cin>>tiketType;
	cin>>r>>c;
	
	if(tiketType=="Premiere"){
			revenue=r*c*12.00;
			printf("%.2f",revenue);
			printf(" leva.");
   }else if(tiketType=="Normal"){
   			revenue=r*c*7.50;
			printf("%.2f",revenue);
			printf(" leva.");
   }else if(tiketType=="Discount"){
   			revenue=r*c*5.00;
			printf("%.2f",revenue);
			printf(" leva.");
		}
		
		return 0;
}
