#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  int ary[10], i;
  srand(time(NULL));
  for(i = 0; i < 10; i++){
    ary[i] = rand();
   }
  ary[9] = 0;
  printf("Original Array\n");
  for(i = 0; i < 10; i++){
    printf("index %d: %d\n", i, ary[i]);
  }
  int new[10];
  int * point_a = ary, * point_b = new + 10;
  for(i = 0; i < 10; i++){
    point_b--;
    *point_b = *point_a;
    point_a++;
  }

  printf("\nReversed Array\n");
  for(i = 0; i < 10; i++){
    printf("index %d: %d\n", i, new[i]);
  }
  return 0;
}
