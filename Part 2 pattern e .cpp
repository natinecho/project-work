#include <iostream>
using namespace std;

int main(){
    //This block contains two loops for the first 10 rows
    for (int i = 0; i < 10; i++) {

        for (int j = 9; j >= i && j > 1; j--) {
            cout << "*" << "  ";
        }

        for (int k = i + 1; k > 3; k--) {
            cout << "   ";
        }

        for (int l = i + 1; l > 1; l--) {
            cout << "   ";
        }

        for (int m = i + 1; m <= 10; m++) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

    // This block contains other two loops for the last 9 rows

    for (int i = 9; i > 0; i--) {

        for (int j = 9; j >= i - 1 && j > 1; j--) {
            cout << "*" << "  ";
        }

        for (int k = i; k > 3; k--) {
            cout << "   ";
        }

        for (int l = 1; l < i; l++) {
            cout << "   ";
        }

        for (int m = i; m <= 10; m++) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

    return 0;
}
//code that accept number of row from user

#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"Enter no. of rows: ";
cin>>n;
n=n/2;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
cout<<" * ";
for(k=1;k<=2*i-1;k++)
{
if(k==1 || k==2*i-1)
cout<<" * ";
else
cout<<"   ";
}
for(j=1;j<=n-i;j++)
cout<<" * ";
cout<<"\n";
}
for(i=n;i>=1;i--)
{
for(j=1;j<=n-i;j++)
cout<<" * ";
for(k=1;k<=2*i-1;k++)
{
if(k==1 || k==2*i-1)
cout<<" * ";
else
cout<<"   ";
}
for(j=1;j<=n-i;j++)
cout<<" * ";
cout<<"\n";
}
return 0; 
}

