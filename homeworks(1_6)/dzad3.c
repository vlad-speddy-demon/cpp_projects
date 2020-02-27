#include <stdio.h>
unsigned long long amf(unsigned long x,unsigned long y)
{



    return((unsigned long long)x*(unsigned long long)y);


}
int main(void){


    printf("%llu\n", amf(295,4294967295));
    return 0;

}
