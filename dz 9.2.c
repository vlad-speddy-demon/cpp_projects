#include <stdio.h>
#include <string.h>

int main()

{
   char str[20] = "killlllll:";
   char str2[20] = "";
   int n = strlen(str);

   printf("%s" ,str);
   for(int i = 0; str[i] != 0; i++)
{
    str2[i]=str[(n-1)-i];
}
printf("%s" ,str2);
}
