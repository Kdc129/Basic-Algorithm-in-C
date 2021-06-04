// Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100.
#include<stdio.h>
int check(int temp);
int main(){
            int temp;
            printf("Input the value temperature:");
            scanf("%d",&temp);
            check(temp);
            printf("%d",check(temp));
          return 0;
}
int check(int temp){
          return temp<0||temp>100;
}