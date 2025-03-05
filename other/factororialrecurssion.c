#include <stdio.h>


long long int factorial(int num1){
    if(num1 == 0 || num1 == 1){
        return 1;
    }
    return num1 * factorial(num1-1);
}

int main(){
   
     int num1;
     printf("enter the number that you want to check factorial ");
     scanf("%d",&num1);
     if(num1 < 0){
        printf("Factorial is not defined for negative numbers.");
     }else{


         printf("The factorial of a number %d is %lld",num1,factorial(num1));
     }



    return 0;
}