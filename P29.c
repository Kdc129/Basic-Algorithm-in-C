/* Write a C program to find the larger from two given integers. 
However if the two integers have the same remainder when divided by 5,
 then the return the smaller integer. If the two integers are the same, return 0.*/
#include<stdio.h>
int check(int x,int y){
          if(x==y){
                    return 0;
          }
          else if(x%5==y%5 && x<y || y<x){
                    return x;
          }
          else{
                    return y;
          }      
}

int main(){
          printf("%d",check(11,21));
          printf("\n%d",check(53,23));
          printf("\n%d",check(11,20));
          printf("\n%d",check(44,21));
          printf("\n%d",check(67,67));
          return 0;
}