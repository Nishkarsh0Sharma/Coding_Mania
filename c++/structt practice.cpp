#include<iostream>
using namespace std;
  struct rectangle 
  {
    int lenght;
    int breadth; 
  };

  int main()
  {
    struct rectangle r1={10,5} ;
    cout<<sizeof(r1)<<endl;
    cout<<r1.breadth<<endl;
    cout<<r1.lenght<<endl;
    return 0;

  }