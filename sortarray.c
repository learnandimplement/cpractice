// sort array
#include <stdio.h>
#include <limits.h>

void sortarray(int arr[],int n){
    

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


}

void secondlargest(int arr[],int n){
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }

     if(secondlargest == INT_MIN){
        printf("No Second Largest Element in an array");
     }else {
        printf("Largest element is %d\n",largest);
        printf("Second Largest element is %d\n",secondlargest);
     }

}



int main(){

    int arr[] = {29, 10, 14, 37, 13, 5, 42, 7, 88, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortarray(arr,n);
    secondlargest(arr,n);
    printf("sorted array is :- [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf(" ]");
   

    return 0;
}