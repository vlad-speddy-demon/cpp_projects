#include <stdio.h>
#include <math.h>

float a2(float x){
    float resalt=((sqrt(pow(x,2)+1)-1)/2)+x;
    return(resalt);
}
float a1(float x){
    float resalt=(exp(x)-exp(-x))/(exp(x)+exp(-x));
    return(resalt);
}
float a3(float x){
    float resalt=(x/(fabs(x)+1));
    return(resalt);
}
float a4(float x){
    float resalt=(1/(tan(x)));
    return(resalt);
}
float a5(float x){
    float resalt=(exp(pow(-x,2)));
    return(resalt);
}
float a6(float x){
    float resalt=(log(1+exp(x)));
    return(resalt);
}
float Rosenbrock2d(float x,float y){
    float resalt=(100*pow(pow(x,2)-y,2)+pow((x-1),2));
    return(resalt);
}
int main(void){

    printf("%f\n", a2(3));
    printf("%f\n", a1(3));
    printf("%f\n", a3(0.5));
    printf("%f\n", a4(1));
    printf("%f\n", a5(-1));
    printf("%f\n", a6(1));
    printf("%f\n", Rosenbrock2d(2,1));
    return 0;

}

