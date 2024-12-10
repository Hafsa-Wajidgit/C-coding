#include <iostream>
using namespace std;
//function for the sum
int sum(int num1,int num2, int num3, int num4, int num5){
	return num1+num2+num3+num4+num5;
}
//function for the maximum number
int max(int num1,int num2, int num3, int num4, int num5){
	int max = num1;
	if (num2>num1 && num2>num3 && num2>num4 && num2>num5){
		max = num2;
	}else if (num3>num1 && num3>num2 && num3>num4 && num3>num5){
		max = num3;
	}else if (num4>num1 && num4>num2 && num4>num3 && num4>num5){
		max = num4;
	}else if (num5>num1 && num5>num2 && num5>num4 && num5>num3){
		max = num5;
	}
	return max;
}
//function for the minimum number
int min(int num1,int num2, int num3, int num4, int num5){
	int min = num1;
	if (num2<num1 && num2<num3 && num2<num4 && num2<num5){
		min = num2;
	}else if (num3<num1 && num3<num2 && num3<num4 && num3<num5){
		min = num3;
	}else if (num4<num1 && num4<num2 && num4<num3 && num4<num5){
		min = num4;
	}else if (num5<num1 && num5<num2 && num5<num4 && num5<num3){
		min = num5;
	}
	return min;
}
//Avgerage of all numbers
int avg(int num1,int num2, int num3, int num4, int num5){
	int avg = sum(num1,num2,num3,num4,num5)/5;
	return avg;
}
//main function
int main(){
 	int num1,num2,num3,num4,num5;
 	cout << "Enter five integers : "<<endl;
 	cin >> num1;
 	cin >> num2;
	cin >> num3;
 	cin >> num4;
 	cin >> num5;
 	
 	cout << "Sum of numbers : "<<sum(num1,num2,num3,num4,num5)<<endl;
 	cout << "Maximum number : "<<max(num1,num2,num3,num4,num5)<<endl;
 	cout << "Minimum number : "<<min(num1,num2,num3,num4,num5)<<endl;
	cout << "Average : "<<avg(num1,num2,num3,num4,num5)<<endl;
	 				
	return 0;
}

