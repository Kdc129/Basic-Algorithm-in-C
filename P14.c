// Write a C program to check if a triple is presents in an array of integers or not.
//  If a value appears three times in a row in an array it is called a triple.
#include<stdio.h>
int test(int num[],int arr_size){
        for(int i=0;i<arr_size-1;i++){
                if(num[i]==num[i+1]&&num[i+2]==num[i])
                        return 1;
                }
                return 0;
        


}
int main(){
        int arr_size;
        int arr1[]={1,2,2,2,3,3,6};
        arr_size= sizeof (arr1)/sizeof (arr1[0]);
        printf("%d\n",test(arr1,arr_size));
        int arr2[]={1,2,3,3,5,6,7,6,6};
        arr_size= sizeof (arr2)/sizeof (arr2[0]);
        printf("%d",test(arr2,arr_size));

        return 0;
}