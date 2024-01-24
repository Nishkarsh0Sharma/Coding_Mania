#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
private:
     int length;
     int breadth;
public:
rectangle()
     {
     length=0;
     breadth=0;
     }
rectangle(int l,int b)
{
     length=l;
     breadth=b;
}
int area()
     {
     return length*breadth;
     }
int perimeter()
     {
     return 2*(length+breadth); 
     }
void setlength(int l)
     {
     length=l;
     }
int getlength()
     {
     return length;
     }
~rectangle()
     {
     cout<<"destructor ";
     }
};
    //rectangle::rectangle (int l,int b);
    //rectangle::rectangle area();
    //rectangle::rectangle perimeter();
int main()
 {
 rectangle r(10,5);
 cout<<"area "<<r.area()<<endl;
 cout<<"perimeter "<<r.perimeter()<<endl;
 r.setlength(20);
 cout<<r.getlength()<<endl;
 return 0;
 };