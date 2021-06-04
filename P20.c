// Write a C program to check whether
//  it is possible to add two integers to get the third integer from three given integers.
#include <stdio.h>
#include <stdlib.h>
   int test(int x, int y, int z);
int main(void){
    printf("%d",test(1, 2, 3));
    printf("\n%d",test(4, -2, 6));
    printf("\n%d",test(1, 1, 2));
     printf("\n%d",test(3, 1, 0));
      printf("\n%d",test(3, 7, 4));
    }       
    int test(int x, int y, int z)
         {
           return x == y + z || y == x + z || z == x + y ? 1:0;
         }
