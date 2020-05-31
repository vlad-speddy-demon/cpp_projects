#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct avto
{
char nomer[20];
char marka[20];
float vartist;
float vik;

};

int main(void){
    int n=3;
//    struct avto a1={"cv1710aa","ford",1700,17};
//    printf("%s %s %g %g ", a1.nomer ,a1.marka,a1.vartist,a1.vik);
    struct avto baza[n];

    for (int i = 0; i<n; i++){

    printf("nomer %d mashina : ", i + 1);
    scanf("%s",baza[i].nomer);
    printf("marka %d mashina : ", i + 1);
    scanf("%s",baza[i].marka);
    printf("cost %d mashina : ", i + 1);
    scanf("%f", &baza[i].vartist);
    printf("years %d mashina : ", i + 1);
    scanf("%f", &baza[i].vik);


    getchar();
    }
  for (int i = 0; i<n; i++)
  {
    printf("\n %d. %s ", i + 1, baza[i].nomer);
    printf("%s %g %g", baza[i].marka, baza[i].vartist,baza[i].vik);
  }
  getchar();
float p=0;
float sum=0;
for (int i = 0; i<n; i++)
    {


    if(baza[i].vik>5){
        p++;
        sum+=baza[i].vartist;
    }

}
printf("%g" , sum/p);

    return 0;
}
