#include <stdio.h>
#include <string.h>

int main()

{
   char str[20] = "kill,,,,;xanbajh,,, lllll:";
   char str2[20] = ",";
int f =0;
int f2 =0;
int f3 =0;
int f4 =0;
   printf("%s" ,str);
   for(int i = 0; str[i] != 0; i++)
{
    if (str[i]==str2[0]){
        f=f+1;
        f3=i;
        if(f4==0){
            f4=f4+1;
            f2=i;
        }

    }

}
printf("\n%d" ,f3);
printf("\n%d" ,f);
printf("\n%d" ,f2);

}
