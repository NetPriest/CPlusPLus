/*Summer clothes

Summer is very changeable and Victor needs your help.
Write a program that, depending on the time of day 
and the degrees, can recommend Victor what clothes 
to wear. Your friend has different plans for each 
stage of the day, which require a different appearance, 
you can see them in the table.

Exactly two lines are read from the console:

· Degrees - an integer in the interval [10… 42]
· Text, time of day - with options - "Morning", "Afternoon", "Evening"

	Degrees				Morning 								Afternoon 								Evening

10 <= degrees <= 18 	Outfit = Sweatshirt Shoes = Sneakers 	Outfit = Shirt Shoes = Moccasins 		Outfit = Shirt Shoes = Moccasins

18 <degrees <= 24 		Outfit = Shirt Shoes = Moccasins 		Outfit = T-Shirt Shoes = Sandals 		Outfit = Shirt Shoes = Moccasins

degrees> = 25 			Outfit = T-Shirt Shoes = Sandals 		Outfit = Swim Suit Shoes = Barefoot 	Outfit = Shirt Shoes = Moccasins

To be printed on the console in one line: "It's {degrees} degrees, get your {clothing} and {shoes}."
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
	int d;
	string t,o,s;
	
	cin>>d>>t;
	
	if(d>=10&&d<=18){
		if(t=="Morning"){
			o="Sweatshirt";
			s="Sneakers";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}else if(t=="Afternoon"){
			o="Shirt";
			s="Moccasins";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}else if(t=="Evening"){
			o="Shirt";
			s="Moccasins";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
			}
	}else if(d>=18&&d<=24){
		if(t=="Morning"){
			o="Shirt";
			s="Moccasins";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}else if(t=="Afternoon"){
			o="T-Shirt";
			s="Sandals";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}else if(t=="Evening"){
			o="Shirt";
			s="Moccasins";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
			}
		}else if(d>=25){
		if(t=="Morning"){
			o="T-Shirt";
			s="Moccasins";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}else if(t=="Afternoon"){
			o="Swim Suit";
			s="Barefoot";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}else if(t=="Evening"){
			o="Shirt";
			s="Moccasins";
			cout<<"It's "<<d<<" degrees, get your "<<o<<" and "<<s<<"."<<endl;
		}
	}
}


















