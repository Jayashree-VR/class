//Array basic program

#include <stdio.h>
int main() {
   int size;
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;i++){
       printf("Enter the value:");
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<size;i++){
       printf("\nThe value of array in %d index is %d",i,arr[i]);
   }

    return 0;
}

