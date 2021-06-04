/* Write a C program to compute the sum of the three integers. 
If one of the values is 13 then do not count it and its right towards the sum. */
#include <stdio.h>
#include <stdlib.h>
 int value(int x, int y, int z)
         {
           if (x == 13) return 0;
           if (y == 13) return x;
           if (z == 13) return y + z;
           return x + y + z;
         }
int main(void){    
    printf("%d",value(4, 5, 7));
    printf("\n%d",value(7, 4, 12));
    printf("\n%d",value(10, 13, 12));
    printf("\n%d",value(13, 12, 18));
    }       
    