// Write a C program to check whether three given integer values are in the range 20..50 inclusive. 
// Return true if 1 or more of them are in the said range otherwise return false.
#include<stdio.h>
int check(int a,int b,int c){
     return (a>=20 && a<=50) || (b>=20 && b<=50) || (c>=20 && c<=50);
}
int main(){
          int x,y,z;
          printf("Input value of three integers::");
          scanf("%d%d%d",&x,&y,&z);
          check(x, y, z);
          printf("%d",check(x,y,z));
          return 0;
}