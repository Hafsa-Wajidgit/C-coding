#include <iostream>
#include <string>
using namespace std;

//function to calculate total marks
void total(int sub_1[], int sub_2[], int sub_3[], int total_marks[], int size){
	for (int i = 0; i < size; i++){
		total_marks[i] = sub_1[i] + sub_2[i] + sub_3[i];
	}
}

//function to calculate highest marks
int highest(int sub_1[], int sub_2[], int sub_3[], int size, int i){
	int high = sub_1[i];
	if (sub_2[i] > high){
		high = sub_2[i];
	}else if(sub_3[i] > high){
		high = sub_3[i];
	}
	return high;
}

//function to calculate lowest marks
int lowest(int sub_1[], int sub_2[], int sub_3[], int size, int i){
	int low = sub_1[i];
	if (sub_2[i] < low){
		low = sub_2[i];
	}else if(sub_3[i] < low){
		low = sub_3[i];
	}
	return low;
}

//function to display
void display(string names[], int sub_1[], int sub_2[], int sub_3[], int total_marks[] , int size){
	
	//for finding out the topper of the class
	int topper_index = 0;
	int highest_marks = total_marks[0];
	
	for(int i = 0; i < size; i++){
		
		//updating topper
		if(total_marks[i] > highest_marks){
			highest_marks = total_marks[i];
			topper_index = i;
		}
		
		//to calculate highest and lowest marks for each student
		int high = highest(sub_1,sub_2,sub_3, size, i);
		int low = lowest(sub_1,sub_2,sub_3, size, i);
		
		//prompting to display the reslts
		cout<<"\n----------------------"<<endl;
		cout<<"        "<<names[i]<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Subject 1     : "<<sub_1[i]<<endl;
		cout<<"Subject 2     : "<<sub_2[i]<<endl;
		cout<<"Subject 3     : "<<sub_3[i]<<endl;
		cout<<"Total marks   : "<<total_marks[i]<<endl;
		cout<<"Highest marks : "<<high<<endl;
		cout<<"lowest marks  : "<<low<<endl;
	}
	//displaying the topper 
		cout<<"\n_____________________________\n"<<endl;
		cout<<"Topper of the Class : "<<names[topper_index]<<endl;
		cout<<"Highest total marks : "<<highest_marks<<endl;
		cout<<"_____________________________"<<endl;
		
}

int main(){
	const int size = 5;
	string names[size] = {"kid 1", "kid 2", "kid 3", "kid 4", "kid 5"};
	
	int sub_1[size] = {80,90,70,65,87};
	int sub_2[size] = {56,87,69,98,66};
	int sub_3[size] = {69,58,49,57,91};
	
	int total_marks[size];
	total(sub_1,sub_2,sub_3,total_marks,size);
	
	cout<<"********************************************"<<endl;
	cout<<"*                                          *"<<endl;
	cout<<"*                  RESULT                  *"<<endl;
	cout<<"*                                          *"<<endl;
	cout<<"********************************************"<<endl;
	
	display(names,sub_1,sub_2,sub_3,total_marks,size);
	
	return 0;
}

