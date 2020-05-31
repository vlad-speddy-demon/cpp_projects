#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char qwe(char str[],char str2[],int t)
{


t =0;
while(str!="")
{


int f=strlen(str);

char str4[20]="";

if  (strstr(str, str2)){






strcpy(str,(strstr(str, str2)));
if((strncmp(str,str2,strlen(str2)))==0){

if(strlen(str)>=strlen(str2)){

        t++;
for(int i = 0; i<(strlen(str)-strlen(str2)); i++)

    str4[i]=str[i+strlen(str2)];

    strcpy(str,str4);


}else{

     printf("%d" ,t);
         break;


}


}
else if((strncmp(str,str2,strlen(str2)))!=0){


         printf("%d" ,t);
         break;



}






}
else{
        printf("%d" ,t);
        break;
}
}
}
int main()

{
char str[20] = "";
printf("stroka: ");
scanf("%s",str);


char str2[20] = "";
printf("podstroka: ");

scanf("%s",str2);




qwe(str,str2,0);




}


