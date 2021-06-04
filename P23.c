/* Write a C program to create a new array of length 3 from a given array (length atleast 3)
 containing the elements from the middle of the array */
 #include<stdio.h>
 #include<stdlib.h>

 int newarray(int num[],int arr_size){
           int i;
           for( i=0;i<arr_size-1;i++){
                printf(" %d  ",num[i]);
           }
           {
           printf("%d",num[i]);
           }
 }
 int main(){
           int arr_size;
           int arr1[]={1,2,3,5,6,8,9};
           arr_size=sizeof arr1/sizeof arr1[0];
           newarray(arr1,arr_size);
           int arr2[]={arr1[arr_size/2-1],arr1[arr_size/2],arr1[arr_size/2+1]};
           printf("\n\nNew array is::");
           newarray(arr2,3);

           return 0;
 }