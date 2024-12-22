#include <iostream>
using namespace std;
int main()
{
	int units_consumed;
	cout << " To calculate your total electricity bill, plz enter your consumed units : " ;
	cin  >> units_consumed;
	
	if( units_consumed <= 200){
		//if the consumed units are 200, then the price is 20PKR per unit.
		int bill200 = units_consumed * 20; 
		cout << " Your total bill is = " << bill200 << " PKR" <<endl;
	} 
	else if(units_consumed <= 500){
		//if the consumed units are above 200 but less than 500, then the price of first 200 units is 20PKR per unit and the remaining units is 30PKR per unit.  	
			int bill = ( 200 * 20) + ((units_consumed - 200) *30);
			cout << " Your total bill is = " << bill << " PKR" <<endl;
		}
		else{
	       //if the consumed units are above 500, then the price is 50PKR per unit.
			cout << " Your total bill is = " << units_consumed * 50 << " PKR" <<endl;
			}
	
	return 0;
}

 
