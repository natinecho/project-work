#include <iostream>
#include<cmath>
using namespace std;
int main() {
  //declare variables
 
cout<<"**********************************"<<endl;
cout<<"*   Temperature Adjustment Menu    *"<<endl;
cout<<"**********************************"<<endl;
cout<<endl;
int to_input[4][3]={
     {1,2,3},
     {4,5,6},
     {7,8,9},
     {0}
 };
//for loop to display the numbers to the screen for user
 for(int i=0; i<4; i++){

    for(int j=0; j<3; j++){
        if(i==3){
            cout<<"\t"<<to_input[i][j]<<endl;
            break;
        }
        cout<<to_input[i][j]<<"\t";
    }
    cout<<endl<<endl;
 }
  
  int temperature,desired_max(0),desired_min(0);
  int *p=&temperature;
  int *max=&desired_max;
  int *min=&desired_min;
  menu:
  cout<<"enter the temperature:";
  cin>>*p;
 // validate temprature input
  if(*p>999 || *p<0){
    cout<<"the temprature is not in range try again! \n";
    goto menu;
  }
// Extract digits from temperature and calculate desired max and min temperatures
  while(*p!=0){
  // Get digits in the imput temperature
    int n=log10(*p);
    int m=pow(10,n);
    int num=*p/m;
  /* If the most significant digit is 1, 4, or 7, calculate 
   desired max and min temperatures and exit loop*/
    if(num==1||num==4||num==7){
    *max=*max+ (num+1)*m ;
    *min=*min + ((num*m)-1);
    break;
    }
  // If the most significant digit is not 1, 4, or 7, update desired max and min temperatures with the digit
    else{
      *max=*max+ num*m;
      *min=*min + num*m;
    }
    *p%=m;
  }
  if(*max==*min){
    cout << "Desired temperature: " <<*max<<endl;
  }
  else{
    cout << "Next smallest temperature: " <<*min << endl;
    cout << "Next largest temperature: " <<*max << endl;
  cout<<endl; 
}
//allow users to imput temperature again
cout<<"If you want to return To menu enter y: ";
char ask;
cin>>ask;
if(ask=='y'){
*min=0;
*max=0;
goto menu;
cout<<endl;
cout<<endl;
}
return 0;
}
