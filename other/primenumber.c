#include <stdio.h>

int isPrime(int num){
    if(num <=1){
        return 0;
    }

    for(int i=2;i<=num/2;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num1;
    printf("Enter the number that you want to check prime\n");
    scanf("%d",&num1);

    if(isPrime(num1)){
        printf("Number is Prime");
    }else{
        printf("Number is not Prime");
    }
     

    return 0;
}