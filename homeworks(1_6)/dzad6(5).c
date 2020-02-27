#include <stdio.h>

float chek(float *x, int n){
    int i;
    float s=0;

    for (i = 0; i<n; i++){


    s+=x[i];

}

float t = s/n;
float s1=0;
float rez =0;
for (i = 0; i<n; i++){


    s1+=pow((x[i]-t),2);



}

return pow(s1/(n-1),0.5);
}

int main()
{
    int h;
printf("%s","kolvo");
  scanf("%d", &h);

  float a[h];
  int i;

  for (i = 0; i<h; i++)
  {
    printf("a[%d] = ", i);
    scanf("%f", &a[i]);
  }

  for (i = 0; i<h; i++)
    printf("%f ", a[i]);
    printf("%f\n", chek(a,h));
  getchar(); getchar();
  return 0;
}
