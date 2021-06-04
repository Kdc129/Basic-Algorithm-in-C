//  Write a C program to compute the sum of the two given integers.
//   If the sum is in the range 10..20 inclusive return 30
#include<stdio.h>
int test(int,int);
int main(){
        printf("%d\n",test(17,12));
        printf("%d\n",test(12,18));
        printf("%d\n",test(22,10));
        printf("%d\n",test(14,16));
        printf("%d\n",test(30,0));
     
          }
int test(int a,int b){
          return a+b >= 10 && a+b <= 20 ? 30:a+b;

}
