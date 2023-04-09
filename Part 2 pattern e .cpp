
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

