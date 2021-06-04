//Write a C program to check whether two given integer values are in the range 20..50 inclusive.
//  Return true if 1 or other is in the said range otherwise false. 
#include<stdio.h>
int check(int x,int y){
          return (x<=20||y>=50) || (x<=20||y>=50);
}
int main(){
          int a,b;
          printf("Input value of two integers::");
          scanf("%d%d",&a,&b);
          check(a,b);
          printf("%d",check(a,b));

          return 0;
}


