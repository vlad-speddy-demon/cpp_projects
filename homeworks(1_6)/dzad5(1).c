#include <stdio.h>
#include <math.h>
#include <string.h>
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
string value='100';
int number = Int32.Parse(value);
//String s = string value.ToString();

int main(){
    printf(" %d ", dec2bin(24));

}
