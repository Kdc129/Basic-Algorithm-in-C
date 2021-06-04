/*Write a C program to find the larger value from two positive integer values that is in the 
range 20..30 inclusive, or return 0 if neither is in that range.*/
#include<stdio.h>
int larger(int x,int y){
          if((x>=20 && x<=30)||(y>=20 && y<=30)){
                    return x>y ? x:y;
          }
          return 0;
}
int main(){
          int a,b;
          printf("Enter value of two integers::");
          scanf("%d%d",&a,&b);
          larger(a,b);
          printf("%d",larger(a,b));
}