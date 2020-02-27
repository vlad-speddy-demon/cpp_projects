#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }




    return bin;
}

int chek(int a ,int b)
{
    int a2=a;
    int a3=a;
    int s=0;
    int b2=b;
    int b3=b;
    while ((a2>0)|(b2>0))
    {
        a3=a2%10;
        a2=a2/10;
        b3=b2%10;
        b2=b2/10;
        if(b3==a3){
            s=s+1;
        }
    }
    return s;
}

int main(){
    printf(" %d ", dec2bin(24));
    printf(" %d ", dec2bin(4));
    printf(" %d ", chek(dec2bin(24),dec2bin(4)));

}
