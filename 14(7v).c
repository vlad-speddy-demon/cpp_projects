#include <stdio.h>
#include <stdlib.h>
//сначало пишем в файл так меньше путаницы если откривать с другого компа


int main()
{
  FILE *S3;
  char x[20], y[20],z[20];


  printf("vvod : ");
  scanf("%s", &x);
  S3 = fopen("S3.txt", "w");
  fprintf(S3, "%s\n", &x);
  fclose(S3);

  S3 = fopen("S3.txt", "r");

  fscanf(S3, "%s", &y);
/*
int w=0;

for(int i = 0; i<strlen(y); i++)
{

    if (y[i]=" "){
        w++;

        if(w==2){
            z[i]=="0";
            w=1;

        }
        else
        z[i]==y[i];

    }
    else
        z[i]==y[i];
        w=0;
}
*/


printf("%s\n", &y);







  fclose(S3);
  fprintf(S3, "%s\n", &z);


  return 0;
}
