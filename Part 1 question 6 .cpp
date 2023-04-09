#include <iostream>
#include<cmath>
using namespace std;
int main() {
  int temperature,desired_max(0),desired_min(0);
  lebl:
  cout<<"enter the temperature:";
  cin>>temperature;
  if(temperature>999 || temperature<0){
    cout<<"the temprature is not in range try again!";
    goto lebl;
  }
  while(temperature!=0){
    int n=log10(temperature);
    int m=pow(10,n);
    int num=temperature/m;
    if(num==1||num==4||num==7){
    desired_max=desired_max+ (num+1)*m ;
    desired_min=desired_min + ((num*m)-1);
    break;
    }
    else{
      desired_max=desired_max+ num*m;
      desired_min=desired_min + num*m;
    }
    temperature%=m;
  }
  if(desired_max==desired_min){
    cout << "Desired temperature: " <<desired_max<<endl;
  }
  else{
    cout << "Next smallest temperature: " <<desired_min << endl;
    cout << "Next largest temperature: " <<desired_max << endl;
  }
return 0;
}