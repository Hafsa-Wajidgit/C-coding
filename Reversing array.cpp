#include<iostream>
using namespace std;
int main (){
	
	int array[]={1,2,3,4,5,6,7,8,9};
	//finding the size of unknown array
	int size = sizeof(array) / sizeof(array[0]); 
	
	//Displaying original array
	cout << "Original array : ";
	for (int i = 0 ; i <= size-1 ; i++ ){
		cout << array[i] <<"  ";	
	}
	cout<<endl<<endl;
	
	//Reversing the elements of array in the memory
	for (int i=0, j =size-1; i < j ; i++ , j--){
	    int	temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	
	//Displaying the reveresed array from the memory
	cout<< "Reversed array : ";
	for (int i = 0 ; i <= size-1 ; i++ ){
		cout << array[i] <<"  ";	
	}
	cout<<endl;
	
	return 0;
}
