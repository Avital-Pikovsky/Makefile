#include<stdio.h>
#include"myMath.h"

int main()
{
double x=0;

printf("Please inset a real number:\n");
scanf("%lf",&x);

double x1= sub(add(Exp((int)(x)),Pow(x,3)),2);

printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point: %f is: %f\n" ,x, x1);
 
double x2 = add(mul(x,3),mul(Pow(x,2),2));
	
printf("The value of f(x) = 3x + 2X^2 at the point :%f is: %f\n" ,x, x2);

double x3 = sub(div(mul((Pow(x,3)),4),5),mul(x,2));
	
printf("The value of f(x) = (4x^3)/5 -2x atthe point: %f is: %f\n" ,x, x3);

return 0;
}
