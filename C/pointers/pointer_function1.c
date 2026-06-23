#include <stdio.h>
int add(int,int);


int main()
{
  int a=10,b=20,result;
  int (*fun)(int,int);  //function pointer
  fun=add;     //invoking function add
  // result=(*fun)(10,20);
  result=fun(a,b);
  printf("%d\n",result);
}



int add(int x,int y)
{
    return x+y;
    
}
