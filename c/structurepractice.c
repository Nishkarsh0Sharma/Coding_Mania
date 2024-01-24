#include<stdio.h>
#include<conio.h>
  struct rectangle 
  {
    int lenght;
    int breadth; 
  };

  int main()
  {
    struct rectangle r1={10,5};
    printf("%d\n ",sizeof(r1));
    printf("%d\n ",r1.lenght);
    printf("%d\n ",r1.breadth);
    return 0;

  }