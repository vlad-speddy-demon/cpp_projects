#include <stdio.h>
#include <string.h>







int main()

{

   char str[20] = "kilrtypyo:";
   char str2[20] = "44745674";
   char str3[20] = "";
   char str4[20] = "";
   int k = 4;

////////
for(int i = 0; i<k; i++)
{
    str3[i]=str[i];
}
for(int i = 0; i<strlen(str2); i++)
{
    str3[i+k]=str2[i];
}
for(int i = k; i<strlen(str); i++)
{
    str3[i+strlen(str2)]=str[i];
}
//printf("%s" ,str3);

//////////

for(int i = k; i<strlen(str); i++)
{
    str4[i-k]=str[i];

}

for(int i = 0; i<strlen(str2); i++)
{
    str[i+k]=str2[i];

}


printf("%s" ,strcat(str,str4));
////////////////////////////
}
