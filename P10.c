/*Write a C program to check which number nearest to the value 100 among two given integers.
 Return 0 if the two numbers are equal.*/
#include<stdio.h>
#include<stdlib.h>
int check(int a,int b){
          int c,d,z=100;
          c=abs(a-z);
          d=abs(b-z);
          return c==d ? 0:(c < d ? a:b);
}
int main(){
          int x,y;
          printf("Input value of two integers::");
          scanf("%d%d",&x,&y);
          check(x,y);
          printf("%d",check(x,y));
          return 0;
}