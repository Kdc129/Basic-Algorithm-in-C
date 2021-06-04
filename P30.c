// Write a C program to check three given integers and 
// return true if one of them is 20 or more less than one of the others
#include<stdio.h>
#include<stdlib.h>
int check(int x,int y,int z){
          return abs(x-y)>=20 || abs(y-z)>=20 ||abs(z-x)>=20;

}

int main(){
          printf("%d\n",check(14,20,12));
          printf("%d\n",check(44,10,14));
          printf("%d\n",check(4,20,21));
          printf("%d\n",check(0,2,0));
          printf("%d\n",check(1,32,12));
          return 0;
}