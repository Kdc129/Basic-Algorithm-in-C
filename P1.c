// Write a C program to compute the sum of the two given integer values.
//  If the two values are the same, then return triple their sum
#include<stdio.h>
int test(int c,int d){
          int sum;
          sum=3*(c+d);
          return c==d? sum:c;
}
int main(){
          int a,b,s,t;
          printf("Input value of two integers::");
          scanf("%d%d",&a,&b);
          test(a,b);
          printf("%d",test(a,b));
        
          return 0;


}