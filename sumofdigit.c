// 14. **Sum of Digits** – Calculate the sum of digits of a number.

#include <stdio.h>

int main(){
    
     int num;
     printf("Enter the number\n");
     scanf("%d",&num);

     int sum = 0;
     while(num!=0){
        int digit = num % 10;
        sum += digit;
        num = num / 10;
     }
     printf("The sum of the digit is %d",sum);


    return 0;
}