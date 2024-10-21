#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//Єлисеєв Микола РЕ-41 №6
int main()
{
 double x, y, z;

 printf("Enter x:");
 scanf("%lf", &x);

 if(x>=10 && x < 100){
 z= pow(x, 2) / 10;
 y = log(z)+2;}
 else if ( x >= 100 && x < 1001 ){
 y = log10(x)+(pow(x, 2)-4)/ (pow(x, 3)+5);}
 else if ( x >= 1800 && x < 2000 ){
 y = -3*pow(sin(x), 2)+3;}
 else{
 y = 1;}
 printf("x = %lf", x);
 printf("\ny = %lf", y);



 return 0;
}
