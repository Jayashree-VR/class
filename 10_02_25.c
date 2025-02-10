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


//Linear search in array

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
    printf("Elements in Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
   int target;
   printf("\nEnter the target value:");
   scanf("%d",&target);
   for(int i=0;i<size;i++){
       if(arr[i]==target){
           printf("The target value %d is in the %d position",target,i);
       }
   }
   
    return 0;
}

//Binary search in array

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;

    // Get the array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get the sorted array elements
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;  // Find middle index

        if (arr[mid] == key) {  // Element found
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key) { // Search in the right half
            low = mid + 1;
        }
        else {  // Search in the left half
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}


//Sum of numbers in array

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
    printf("Elements in Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("\nSum of numbers in array is %d",sum);

    return 0;
}
