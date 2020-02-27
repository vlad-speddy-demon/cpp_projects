#include <stdio.h>
#include <math.h>





double  main(){
double  e=0.0001;
double x=0.6;
double s=x;
double l=x;
double c=1;

while ( fabs(l)>e)
{

c=c+1;
l=(l*x)/(c);
s=s+l*pow(-1,c+1);

printf("%f\n",s);
;
}

return(s);



}
