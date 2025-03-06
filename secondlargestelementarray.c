// 17. **Find the Second Largest Number** – Find the second largest number in an array. 
#include <stdio.h>

int main(){

    int num[10] = {1,2,8,4,6,7,9,11,2,3};

    int largest = num[0];
    int secondlargest = num[0];

    for(int i=1;i<10;i++){
        if(num[i] >= largest){
            secondlargest = largest;
            printf("secondlargest %d\n",secondlargest);
            largest = num[i];
            printf("largest %d\n",largest);
        }else if(num[i] > secondlargest && num[i] != largest){
           secondlargest = num[i];
           printf("secondlargest in elseif %d\n",secondlargest);
        }
        
        
    }

    printf("largest number is %d\n",largest);
    printf("second largest number is %d \n",secondlargest);

   

    return 0;
}