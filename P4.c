//  Write a C program to check a given integer and return true if it is within 10 of 100 or 200
#include<stdio.h>
int check(int a,int b){
          return a==30||b==30||(a+b)==30;
}
int main(){
          int n,m;
          printf("Input the value of given integers::");
          scanf("%d%d",&n,&m);
          check(n,m);
          printf("%d",check(n,m));
          return 0;
}