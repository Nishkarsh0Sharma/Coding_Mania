#include<iostream>
using namespace std;
int main()
{
    int a=858;
    int &r=a;
    cout<<a<<endl;
    cout<<r<<endl;
    r++;
    cout<<a<<endl;
    cout<<r<<endl;
    
    return 0;
}