#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input_int;
  float input_float;
  
  printf("enter an integer : ");
  scanf("%d", &input_int);
  
  printf("enter a float : ");
  scanf("%f", &input_float);
  
  printf("integer : %d, float : %f\n", input_int, input_float);
  
  system("PAUSE");
  return 0;
}
