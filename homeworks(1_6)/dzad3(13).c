#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct tochka
{
float x;
float y;
};

struct line
{
struct tochka b1;
struct tochka b2;
};
bool mid(float a,float b,float c)
{
    if((a<=b<=c)||(a>=b>=c))
    {
     return(true);
    }
    else
    {
     return(false);
    }
}




bool chek(struct tochka t1,struct line l1)
{
    if(((mid(l1.b1.x ,t1.x ,l1.b2.x))&&mid(l1.b1.y ,t1.y ,l1.b2.y))&&((t1.x-l1.b1.x)/(l1.b2.x-l1.b1.x)==(t1.y-l1.b1.y)/(l1.b2.y-l1.b1.y)))
{
 return(true);
}
else
{
return(false);
}
}

int main(void){
    struct tochka a1={1,1};
    struct tochka a2={3,3};
    struct tochka a3={9,17};
    struct tochka a4={10,15};//задаем багатокутнык//
    struct tochka a5={1,4};
    struct tochka a6={2,2};
    struct line l1={a1 , a2};
    struct line l2={a2 , a3};
    struct line l3={a3 , a4};
    struct line l4={a4 , a5};
    struct line l5={a5 , a1};

    printf("%d\n",chek(a6,l1));
    printf("%d\n",chek(a6,l2));
    printf("%d\n",chek(a6,l3));
    printf("%d\n",chek(a6,l4));
    printf("%d\n",chek(a6,l5));






    printf("%f %f\n", a1.x , a1.y);
    return 0;

}

