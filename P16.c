//  Write a C program that accept two integers and
//   return true if either one is 5 or their sum or difference is 5.
#include<stdio.h>
int test(int ,int);
int main(){
     printf("%d\n",test(5,6));
      printf("%d\n",test(7,6));
       printf("%d\n",test(3,2));
        printf("%d\n",test(5,5));
         printf("%d\n",test(18,13));
}
int test(int a,int b)
{
          return a==5 ||b==5 || a+b==5 || abs(a-b)==5 ? 1:0;
}
