#include <iostream>
#include <cmath>


using namespace std;
float a1(float x){
float resalt=(exp(x)-exp(-x))/(exp(x)+exp(-x));
return(resalt);
}

float a2(float x){
float resalt=((sqrt(pow(x,2)+1)-1)/2)+x;
return(resalt);
}
float a3(float x){
float resalt=x/(abs(x)+1);
return(resalt);
}


int main(){

    cout << a1(1) << endl;
    cout << a2(2) << endl;
    cout << a3(2) << endl;
    cout << "to easy" << endl;
    return 0;
}
