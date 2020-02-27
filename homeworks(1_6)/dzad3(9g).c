#include <stdio.h>
float amf(float a,float x)
{
if(x<0)
{
 return(a*(exp(x)-1));
}
else
{
return(x);
}
}
int main(void){


    printf("%f\n", amf(3,-3));
    return 0;

}
