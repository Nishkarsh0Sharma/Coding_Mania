#include<iostream>
#include<conio.h>
using namespace std;

template<class T>    //Template classes 
class Arithmetic
{
private:
     T length;
     T breadth;
public:
Arithmetic();
Arithmetic(T l,T b);
T area();
T perimeter();
};

template<class T>
Arithmetic<T>::Arithmetic()
{
     length=0;
     breadth=0;
}

template<class T>
Arithmetic<T>::Arithmetic(T l,T b)
{
     this->length=l;
     this->breadth=b;
}

template<class T>
T Arithmetic<T>::area()
{
     T c;
     c=length*breadth;
     return c;
}

template<class T>
T Arithmetic<T>::perimeter()
{
     T c;
     c=2*(length+breadth);
     return c;
}

int main()
 {
 Arithmetic<float> ar(10.7854,5.642876);
 cout<<"area "<<ar.area()<<endl;
 cout<<"perimeter "<<ar.perimeter()<<endl;
 return 0;
 };