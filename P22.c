// Write a C program to check whether two or more non-negative given integers have the same rightmost digit.
#include<stdio.h>
int  test(int a,int b,int c){
          return a%10==b%10 || b%10==c%10 ||a%10==c%10;
}

int main(){
          printf("%d\n",test(22,42,82));
          printf("%d\n",test(11,22,31));
          printf("%d\n",test(9,7,5));
          return 0;
}