#include <iostream>
using namespace std;
int main() {

 //declare variables 
  double loan,interest,payment,balance_loan[40],monthly_interest[40],count(0);
  cout<<"enter the loan amount:"; //prompt the user to enter loan amount
  cin>>loan;
  cout<<"enter interest rate:"; //get interest rate from the user
  cin>>interest;
  payment=(loan)/20; //calculate monthly payment
 //display table headers
  cout<<"months"<<'\t'<<"monthly_interest"<<'\t'<<"balance of loan"<<'\t'<<" monthly payment"<<endl;
  int i=0;
  //loop until loan is fully paid off
  while(loan>0){
    // Calculate monthly interest and balance of loan
      monthly_interest[i]=(loan*interest*0.01)/12;
      balance_loan[i]=(loan-(payment-monthly_interest[i]));
      // Update loan and payment if balance_loan is negative 
      loan=balance_loan[i];
      if(balance_loan[i]<0){
         payment+=balance_loan[i];
        balance_loan[i]=0;
      }
      // Display monthly data in table format
       cout<<'\n'<<"month"<<i+1<<'\t'<<'\t'<<monthly_interest[i]<<'\t'<<'\t'<<balance_loan[i]<<'\t'<<'\t'<<payment<<endl;
      // Increment month count
      i++;
  }
 // End of program
return 0;
}
