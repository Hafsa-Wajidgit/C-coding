#include<iostream>
using namespace std;

//task 8: display last element of the 2D array
void display(int marks[3][3]){
    int last=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            last = marks[i][j];
        }
    }
    cout<<"Last element of the array : "<<last<<endl;
}

//task 9:search for 50 in the array
void search(int marks[3][3]){
    bool fifty=false;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (marks[i][j]==50){
               fifty=true;
            }
        }
    }
    if(fifty==true){
        cout<<"\n50 is found."<<endl;
    }else{
        cout<<"50 is not found."<<endl<<endl;
    }
    cout<<endl;
}

//task 10: Replace 70 with 22. Updating the value in the array
void replace(int marks[3][3]){
    int value=22;
    cout<<"Replacing 70 with 22 :\n";
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(marks[i][j]==70){
                marks[i][j]=22;
            }
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    //task 1: Displaying the array
    int marks[3][3]={ {65,70,80},
                      {85,90,95},
                      {75,50,40} };
                      
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }                 
    cout<<endl;    
	              
    //task 2: Sum of columns of the array
    for(int i=0;i<3;i++){
        int sumcol=0;
        for(int j=0;j<3;j++){
            sumcol += marks[j][i];
        }
        cout<<"Sum of column "<<i+1<<" : "<<sumcol<<endl;
    }
   cout<<endl;
   
   int total=0 , max=0 , above=90;
   for(int i=0;i<3;i++){
       int sumr=0;
       for(int j=0;j<3;j++){
       	//task 3:sum of rows of the array
           sumr += marks[i][j];
           
        //task 4:total marks: sum of all the elements of the array
           total += marks[i][j];
           
        //task 5:maximum marks: finding the maximum number in the array
           if(marks[i][j]>max){
               max=marks[i][j];
           }
        //task 6:checking for above 90 
           if(marks[i][j]>above){
               above=marks[i][j];
           }
       }
       //Displaying the results
       cout<<"Sum of row "<<i+1<<" : "<<sumr<<endl;
   }
   cout<<"\nTotal marks : "<<total<<endl;
   cout<<"Maximum marks : "<<max<<endl;
   cout<<"Marks you scored above 90 : "<<above<<endl;
   
   //task 7:displaying only first column as final term marks
   cout<<"\nFinal term marks."<<endl;
   for(int i=0;i<3;i++){
       cout<<"Marks "<<i+1<<" : "<<marks[i][0]<<endl;
   }
   cout<<endl;
   
   //functions call
   display(marks);
   search(marks);
   replace(marks);
   
    return 0;
}
