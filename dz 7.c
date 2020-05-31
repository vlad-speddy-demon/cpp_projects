
#include <stdlib.h>





int main()
{
  int i, j;
  int g=7;
  int y=6;
  int n=3;

  int myArray[g][y]; // объ€вл€ем массив размером g*y элементов

  for ( i = 0; i < g; i++ ) {
    for ( j = 0; j < y; j++ )
      myArray[i][j] = i * j; // каждому элементу присваиваем значение произведени€ текущих индексов элемента массива
  }

  printf( "masiv:\n" );
  for ( i = 0; i < g; i++ ) {
    for ( j = 0; j < y; j++ )
    {
        printf( "[%d][%d]=%d ", i, j, myArray[i][j] );
    }
    printf( "\n" );
  }
  getchar();
  int h;
  for ( h = 0; h < n; h++ ){
  int r[1][y];
  for ( j = 0; j < y; j++ ){
        r[0][j]=myArray[0][j];


  }

    for ( i = 0; i < g-1; i++ ){
    for ( j = 0; j < y; j++ )
    {
    myArray[i][j] = myArray[i+1][j];
  }
}
 for ( j = 0; j < y; j++ ){
        myArray[g-1][j]=r[0][j];
 }
  }
for ( i = 0; i < g; i++ ) {
    for ( j = 0; j < y; j++ )
    {
        printf( "[%d][%d]=%d ", i, j, myArray[i][j] );
    }
    printf( "\n" );
}


  getchar();



  for ( i = 0; i < g-1; i++ ){

  }

}
