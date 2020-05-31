#include <stdio.h>
#include <stdlib.h>
//2 в одном и переворот и увеличение букв
int main()
{
  FILE *S1, *S2;
  char x[20], y[20],z[20];


  printf("vvod : ");
  scanf("%s", &x);
  S1 = fopen("S1.txt", "w");
  fprintf(S1, "%s\n", &x);
  fclose(S1);
  S1 = fopen("S1.txt", "r");
  S2 = fopen("S2.txt", "w");
  fscanf(S1, "%s", &y);
  printf("%s",y);
  strcpy(z,y);
  printf("%s",z);
int r;
r=0;
while (z[r]!='\0')
{
z[r]=toupper(z[r]);
r++;
}
int n = strlen(z);
for(int i = 0; z[i] != 0; i++)
{
    y[i]=z[(n-1)-i];
}









  fclose(S1);
  fprintf(S2, "%s\n", &y);
  fclose(S2);
  return 0;
}
