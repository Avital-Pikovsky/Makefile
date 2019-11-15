#include "myMath.h"

double Pow(double x , int y)
{
double sum = 1;
while(y!=0){
if(y>0){
sum = sum*x;
y--;
}
else if(y<0){
sum = sum/x;
y++;
}
}
return sum;
}

double Exp(int x)
{
double e = 2.71828182846;
double num= Pow(e,x);
return(num);
}

