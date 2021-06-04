/*  Write a C program to compute the sum of three given integers. 
If the two values are same return the third value. */
#include<stdio.h>
int compute(int x,int y,int z)
{         if(x==y && y==z)return 0;
          if(x==y)return z;
          if(y==z)return x;
          if(z==x)return y;
          return x+y+z;
}
int main(){
          printf("%d",compute(4,5,3));
          printf("\n%d",compute(5,5,8));
          printf("\n%d",compute(4,4,4));
          printf("\n%d",compute(7,8,8));
          printf("\n%d",compute(7,4,1));

          return 0;
}