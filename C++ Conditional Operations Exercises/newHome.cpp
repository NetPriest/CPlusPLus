/*New home

Marin and Nelly are buying a house not far from Sofia.
Nelly loves flowers so much that she convinces you to
write a program that will calculate how much it will
cost them, to plant a certain number of flowers and
whether the available budget will be enough.
Different flowers have different prices.
 
 
Flower  Rose  Dahlia  Tulip 	Narcissus  Gladiolus
Price   5 	 3.80 	  2.80 		3 		   2.50

There are the following discounts:

If Nelly buys more than 80 Roses - 10% discount from the final price
If Nelly buys more than 90 Dahlias - 15% discount from the final price
If Nelly buys more than 80 Tulips - 15% discount from the final price
If Nelly buys less than 120 Narcissus - the price increases by 15%
If Nelly Buy less than 80 Gladiolus - the price increases by 20%

3 lines are read from the console:
Type of flowers - text with options - "Roses", "Dahlias", "Tulips", "Narcissus", "Gladiolus"
Number of flowers - integer in the interval [10… 1000]
Budget - an integer in the range [50… 2500]

To print on the console in one line:
If their budget is enough - "Hey, you have a great garden with {number of flowers} {type of flowers} and {remaining amount} leva left."
If their budget is NOT enough - "Not enough money, you need {the amount needed} leva more."

The amount should be formatted to the second decimal place.
 */
 
 #include<iostream>
 #include<string>
 using namespace std;
 
 int main(){
 	
 	string flowers;
 	int fn;
	double budget,finalPrice;
 	cin>>flowers>>fn>>budget;
 	
 	
 	if(flowers=="Roses"){
 		if(fn>80){
 			finalPrice=fn*5-(fn*5)*0.10;
 			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}else {
			finalPrice=fn*5;
			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}
 		
	 }else if (flowers=="Dahlias"){
 		if(fn>90){
 			finalPrice=fn*3.80-(fn*3.80)*0.15;
 			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}else {
			finalPrice=fn*3.80;
			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}
		
 		/*Apparently here I have some kind of problem, because everything is like in the other ifs/elses.
		The budget should be 50.56 but somehow it is aways 0.00 and I don't understand why??? 
		I carefully inspected the Curly brackets and everything seems to be fine... 
		PS: I managed to fix the problem everything works normally now. I have removed the last else if and made it obviously only else my badd...
		*/
	 }else if (flowers=="Tulips"){
 		if(fn>80){
 			finalPrice=fn*2.80-(fn*2.80)*0.15;
 			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}else {
			finalPrice=fn*2.80;
			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}
 		
	 }else if (flowers=="Narcissus"){
 		if(fn<120){
 			finalPrice=fn*3+(fn*3)*0.15;
 			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}else {
			finalPrice=fn*3;
			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}
 		
	 }else if (flowers=="Gladiolus"){
 		if(fn<80){
 			finalPrice=fn*2.50+(fn*2.50)*0.20;
 			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}else {
			finalPrice=fn*2.50;
			if(budget>finalPrice){
 				budget-=finalPrice;
 				cout<<"Hey, you have a great garden with "<<fn<<" "<<flowers<<" and ";
 				printf("%.2f",budget);
 				cout<<" leva left."<<endl;
			 }else if (budget<finalPrice){
			 	finalPrice-=budget;
			 	cout<<"Not enough money, you need ";
				printf("%.2f",finalPrice);
 				cout<<" leva more."<<endl;
			 }
		}
 		
	 }
 }
 
 
 
 
 
 
 
