//  Write a C program to check whether y is greater than x,
//   and z is greater than y from three given integers x,y,z
#include<stdio.h>
int check(int x,int y,int z){
          return y>=x && z>=y;
}

int main(){
          printf("%d\n",check(3,5,7));
           printf("%d\n",check(3,2,1));
            printf("%d\n",check(1,7,8));
             printf("%d\n",check(4,9,12));
              printf("%d",check(7,12,9));
               return 0;
}