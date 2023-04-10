#include <iostream>
using namespace std;
int main() {

 //declare variables 
  double loan,interest,payment;
 double balance_loan[40],monthly_interest[40],count(0);
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
      *(monthly_interest+i)=(loan*(interest/100))/12;
      *(balance_loan+i)=(loan-(payment-monthly_interest[i]));
      // Update loan and payment if balance_loan is negative 
      loan=*(balance_loan+i);
      if(*(balance_loan+i)<0){
         payment+=*(balance_loan+i);
        *(balance_loan+i)=0;
      }
      // Display monthly data in table format
       cout<<'\n'<<"month"<<i+1<<'\t'<<'\t'<<*(monthly_interest+i)<<'\t'<<'\t'<<*(balance_loan+i)<<'\t'<<'\t'<<payment<<endl;
      // Increment month count
      i++;
  }
 // End of program
return 0;
}
//using pointers for this problem
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loanAmount, interestRate, monthlyPayment, monthlyInterest, balance, totalInterest = 0.0;
    int months = 0;
    double *pMonthlyPayment = &monthlyPayment;
    double *pMonthlyInterest = &monthlyInterest;
    double *pBalance = &balance;

    cout << "Enter loan amount: ";
    cin >> loanAmount;

    cout << "Enter interest rate (in percentage): ";
    cin >> interestRate;

    // Convert interest rate to decimal
    interestRate /= 100.0;

    // Calculate monthly payment (1/20th of loan amount)
    monthlyPayment = loanAmount / 20.0;

    cout << fixed << setprecision(2);
    cout << "Monthly payment: $" << *pMonthlyPayment << endl;

    balance = loanAmount;

    // Output the table header
    cout << "Month" << setw(15) << "Balance" << setw(18) << "Interest" << setw(16) << "Payment\n";

    while (balance >= monthlyPayment) {
        // Calculate monthly interest payment
        monthlyInterest = (balance * interestRate) / 12.0;
        // Calculate the payment towards the principal amount
        double paymentTowardPrincipal = monthlyPayment - monthlyInterest;
        // Calculate the new balance amount
        balance -= paymentTowardPrincipal;

        // Output the table values
        cout << setw(4) << months + 1 << setw(15) << *pBalance << setw(18) << *pMonthlyInterest << setw(16) << *pMonthlyPayment << endl;
        // Keep track of total interest paid
        totalInterest += monthlyInterest;

        months++;
    }

    // Output final balance and total interest paid
    cout << "Final balance: $" << *pBalance << endl;
    cout << "Total interest paid: $" << totalInterest << endl;

    // Calculate simple annualized percentage paid in interest
    double percentInterestPaid = (totalInterest / loanAmount) * 100.0;
    cout << "Percent of original loan paid in interest: " << percentInterestPaid << "%" << endl;

    return 0;
}



