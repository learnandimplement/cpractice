// 7. **Factorial of a Number** – Find the factorial of a given number.
#include <stdio.h>

// long long int  checkfactorial(int num1){
//     if(num1 == 0 || num1 == 1){
//         return 1;
//     }
//     return num1 * checkfactorial(num1-1);
// }

// another factorial
  long long int checkfactorial(int num1){
    long long int fact = 1;

    for(int i=2;i<=num1;i++){
        fact = fact * i;
    }
    return fact;
  }

int main(){
   
    int num1;
    printf("Enter the number that you want to factorial of \n");
    scanf("%d",&num1);

    if(num1 < 0){
        printf("factorial can't be negative numbers");
    }else {
        printf("The factorial of a %d is %lld",num1,checkfactorial(num1));
    }

    // int factorail = checkfactorial(num1);

    // printf("The factorial of a %d is %lld",num1,factorail);

    return 0;
}