#include <iostream>
#include<cmath>
using namespace std;
int main() {
  //declare variables 
  int temperature,desired_max(0),desired_min(0);
  int *p=&temperature;
  int *max=&desired_max;
  int *min=&desired_min;
 // prompt the user for temperature input
  lebl:
  cout<<"enter the temperature:";
  cin>>temperature;
 // validate temprature input
  if(*p>999 || *p<0){
    cout<<"the temprature is not in range try again!";
    goto lebl;
  }
// Extract digits from temperature and calculate desired max and min temperatures
  while(*p!=0){
  // Get number of digits in temperature
    int n=log10(*p);
 // Get the highest power of 10 that divides the temperature
    int m=pow(10,n);
 // Get the most significant digit of the temperature
    int num=*p/m;
  // If the most significant digit is 1, 4, or 7, calculate desired max and min temperatures and exit loop
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
  // Remove the most significant digit from the temperature and repeat the process for the remaining digits
    *p%=m;
  }
 // Display desired max and min temperatures
  if(*max==*min){
    cout << "Desired temperature: " <<*max<<endl;
  }
  else{
    cout << "Next smallest temperature: " <<*min << endl;
    cout << "Next largest temperature: " <<*max << endl;
  }
//End of program
return 0;
}
