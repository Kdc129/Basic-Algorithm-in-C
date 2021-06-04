//  Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7.
#include<stdio.h>
int check(int a)
{
          return a%3==0||a%7==0;
}
int main(){
          int n;
          printf("Enter the value of n::");
          scanf("%d",&n);
          check(n);
          printf("%d",check(n));
}