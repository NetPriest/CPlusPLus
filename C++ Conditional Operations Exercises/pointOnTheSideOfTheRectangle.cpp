/*Point on the side of the rectangle

Write a program that checks if the point {x, y}
is on one of the sides of the rectangle {x1, y1} - {x2, y2}.
The input data is read from the console and consists of 6 
lines entered by the user: the decimal numbers x1, y1, x2, y2, x and y 
(ensuring that x1 <x2 and y1 <y2). Print "Border" (the point lies on one of the sides)
or "Inside / Outside" (otherwise).*/

#include<iostream>

using namespace std;

int main(){
	
	double x,y,x1,y1,x2,y2;
	bool c1=false,c2=false;
	cin>>x1>>y1>>x2>>y2>>x>>y;
	
	if((x==x1||x==x2)&&(y>=y1&&y<=y2)){
		c1=true;
	}
	
	if((y==y1||y==y2)&&(x>=x1&&x<=x2)){
		c2=true;
	}
	
	if(c1||c2){
		printf("Border");
	}else {
		printf("Inside/Outside");
	}

}

