/*  Write a C program to get the absolute difference between n and 51.
 If n is greater than 51 return triple the absolute difference.*/
#include<stdio.h>
int diff(int n){
          if(n>51){
                    return (n-51)*3;
          }
          return  (n-51);
}

int main(){ 
          int n;
          printf("Enter the value of n::");
          scanf("%d",&n);
          diff(n);
          printf("%d",diff(n));
          
          return 0;
}