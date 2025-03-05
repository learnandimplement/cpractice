#include <stdio.h>
// 4. **Find the Largest Number** – Compare three numbers and print the largest.
int main(){
    
     int num1 = 8;
     int num2 = 9;
     int num3 = 11;
     int largest;
     if(num1 >= num2 && num1 >= num3){
        largest = num1;
     }else if(num2 >= num1 && num2 >= num3){
        largest = num2;
     }else {
        largest = num3;
     }

      printf("The largest number is %d " , largest);

    return 0;
}