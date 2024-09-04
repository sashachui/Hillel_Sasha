#include"MathFuncs.h"

int Math::divide(int a,int b)
{
  if(b !=0)
  {
    return a/b;
  }
    return -1;

}

int Math::multiply(int a,int b)
{
    return a*b;
}
int Math::square(int a)
{
 if(a >0)
 {
   return a*a;
 }
 return -1;
}