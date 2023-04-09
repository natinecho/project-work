#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
  double lone,interest,payment,balance_lone[40],monthly_interest[40],count(0);
  cout<<"enter the lone amount:";
  cin>>lone;
  cout<<"enter interest rate:";
  cin>>interest;
  payment=(lone)/20;
  cout<<"months"<<'\t'<<"monthly_interest"<<'\t'<<"balance of lone"<<'\t'<<" monthly payment"<<endl;
  int i=0;
  while(lone>0){
      monthly_interest[i]=(lone*interest*0.01)/12;
      balance_lone[i]=(lone-(payment-monthly_interest[i]));
      
      lone=balance_lone[i];
      if(balance_lone[i]<0){
         payment+=balance_lone[i];
        balance_lone[i]=0;
      }
       cout<<'\n'<<"month"<<i+1<<'\t'<<'\t'<<monthly_interest[i]<<'\t'<<'\t'<<balance_lone[i]<<'\t'<<'\t'<<payment<<endl;
      i++;
  }
return 0;
}