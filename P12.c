// Write a C program to check if two given non-negative integers have the same last digit.
#include<stdio.h>
#include<stdlib.h>

int test(int a,int b){
       
          return abs(a%10)==abs(b%10);
}
int main(){
      
        int x,y;
        printf("Input value of two integers::");
        scanf("%d%d",&x,&y);
        test(x,y);
        printf("%d",test(x,y));
        return 0;
}