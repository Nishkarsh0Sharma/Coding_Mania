/******************
  STRUCTURE AS PARAMETER :- "CALL BY ADRESS" 
  (BUT IN "CALL BY VALUE" THE OF LENGHT AND BREADTH DID'N CHANGE 
  IN MAIN())
  *****************/

#include<stdio.h>
#include<stdlib.h>

struct rectangle 
{
  int lenght;
  int breadth;
  
};
void fun(struct rectangle *p)
{
  p->lenght=68;
  printf("lenght:  %d \nbreadht: %d \n",p->lenght,p->breadth);
}

int main()
{
  struct rectangle r={10,55};
  fun(&r);
  printf("lenght:  %d \nbreadth: %d \n",r.lenght , r.breadth );
}