// Write a C program to to test whether a given non-negative number is a multiple of 13
//  or it is one more than a multiple of 13.
#include<stdio.h>
int test(int a){
          return a%13 == 0 || a%13==1 ? 1:0;
}
int main(){
          int n;
          printf("Value of n is::");
          scanf("%d",&n);
          printf("%d\n",test(n));
}

