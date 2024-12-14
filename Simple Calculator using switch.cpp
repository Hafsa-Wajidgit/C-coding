#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	float num1, num2;
	char op;
	
	//prompt the user to enter the inputs
	cout << " Enter the first number : ";
	cin  >> num1 ;
	cout << " Enter an operator : ";
	cin  >> op;
	cout << " Enter the second number : ";
	cin  >> num2 ;
	
	// code for the calculation based on input
	switch (op){
		case '+':
			cout<<" Result = " <<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
			break;
			
		case '-':
			cout<<" Result = " <<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
			break;
			
		case '*':
			cout<<" Result = " <<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
			break;
			
		case '/':
			if(num2>0){
				cout<<" Result = " <<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
				}else{
					cout<<" ERROR....!! Division by zero"<<endl;
				}
				break;
		
		default:
			cout << " Invalid operator..." <<endl;
	}

	return 0;
}
 
