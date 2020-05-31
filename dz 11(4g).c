#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct adres
{
const char *gorod;
const char *vyl;
int dim;
int kvar;

};
int main(void){
    const char *g="kyiv";
    const char *v="lomonosova";
    int d=47;
    int kvar=445;
    struct adres dr={g,v,d,kvar};
    printf("misto %s vyl %s byd %d  kvar%d ", dr.gorod ,dr.vyl,dr.dim,dr.kvar);
    return 0;
}
