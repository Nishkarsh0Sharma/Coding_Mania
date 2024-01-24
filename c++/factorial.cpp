#include<iostream>
using namespace std;
int factorial(int n);{
    if (n==0) //we should not to go negative fact.
    return 1; 
int partial ans = int factorial (n-1);
return n*partial ans ;
}
int main()
{
int n;
cin>>n;
{ if (n<0)
  cout<<"error";
  else 
  cout<<"factorial(n)";
}
return 0;
}