// Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.
#include<stdio.h>
int test(int q){
          return q%3==0 ^ q%7==0 ;
}

int main(){
          int n;
          printf("Value of n is::");
          scanf("%d",&n);
          printf("%d\n",test(n));
          return 0;
}