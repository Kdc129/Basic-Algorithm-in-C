// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.
#include<stdio.h>
int range(int x,int y){
          return (x>=100&& x<=200) || (y>=100 && y<=200);
}
int main(){
          int p,q;
          printf("Enter the value of two integers::\n");
          scanf("%d%d",&p,&q);
          range(p,q);
          printf("%d",range(p,q));

          return 0;
}