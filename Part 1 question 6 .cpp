#include <iostream>
#include<cmath>
using namespace std;
int main() {
  int temperature,desired_max(0),desired_min(0);
int *p=&temperature;
int *max=&desired_max;
int *min=&desired_min;
  lebl:
  cout<<"enter the temperature:";
  cin>>temperature;
  if(*p>999 || *p<0){
    cout<<"the temprature is not in range try again!";
    goto lebl;
  }
  while(*p!=0){
    int n=log10(*p);
    int m=pow(10,n);
    int num=*p/m;
    if(num==1||num==4||num==7){
    *max=*max+ (num+1)*m ;
    *min=*min + ((num*m)-1);
    break;
    }
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
  }
return 0;
}