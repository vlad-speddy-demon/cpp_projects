#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>



int main(){
  int * arr = NULL;
  int arr_size = 0;

  printf("%c", ' ');
  while (1){
    char cmd[1];
    printf("arr[%d]: ", arr_size);
    scanf("%s", cmd);


    if (strcmp(cmd, "0") == 0){
      getchar();
      break;
    }

    arr = (int *) realloc(arr, (arr_size + 1) * sizeof(int));
    arr[arr_size] = atoi(cmd);

    arr_size++;
  }

  printf("%cArray: %c", '\n', '{');
  int s=0;
  for (int i = 0; i < arr_size; i++){
    printf(" %d ", arr[i]);
    if(((arr[i])<0)&&(((arr[i])>s)||s==0)){
        s=arr[i];

    }

  }

  printf("%c%c", '}','\n');
  printf("%d\n",s);


  return 0;
}
