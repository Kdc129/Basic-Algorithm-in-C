/*Write a C program to check two given integers, and return true if one of them is 30 or 
if their sum is 30*/
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