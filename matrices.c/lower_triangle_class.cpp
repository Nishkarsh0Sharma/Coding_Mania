#include<iostream>
using namespace std;

class lower_triangle_class
{
private:
    int *A;
    int n;
public:
    lower_triangle_class(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~lower_triangle_class(){delete []A;}
    void display(bool row=true);
    void setRowMajor(int i,int j,int x);
    void setColMajor(int i,int j,int x);
    int getRowMajor(int i,int j);
    int getColMajor(int i,int j);
    int getN(){return n;}
};

void lower_triangle_class::setColMajor(int i,int j,int x)
{
    if(i>=j)
    {
        int index=((i*(i+1))/2)+j-1;
        A[index]=x;
    }
}

   
