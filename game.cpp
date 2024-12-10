#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int num;
	cout << "Let's play a guessing game...."<<endl;	
    
	while(true){
	//prompt the user to enter the input
	
	cout << "Enter any number between 1 to 20 : ";
	cin  >> num;
	if(num == 11){
		cout << "Great... You guessed the correct number..." <<endl;
		break;
	}else{
		cout <<"Oopss... Try again" <<endl;
    	}
	}

		
	return 0;
}
 
