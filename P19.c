// Write a C program to compute the sum of the two given integers.
//  If one of the given integer value is in the range 10..20 inclusive return 18.
#include<stdio.h>
int test(int x,int y)
{
              return (x >= 10 && x <= 20) || (y >= 10 && y <= 20) ? 18 : x + y;
}
int main(){
          printf("%d\n",test(11,16));
           printf("%d\n",test(21,22));
            printf("%d\n",test(12,18));
             printf("%d\n",test(0,19));
              printf("%d",test(11,7));

          return 0;
}