#include <stdio.h>


int isPrime(int num1){
    if (num1 < 2) {
        return 0; 
    }
   

    for(int i=2;i<=num1/2;i++){
        if(num1 % i == 0){
            return 0;
        }
    }

    return 1;
}



void checkprimenumbers(int num1,int num2){
    if(num1 <= 0 || num2 <=0){
        printf("Enter correct numbesr");
        return;
    }
    if(num1 > num2){
        printf("num1 cannot be greater thatn 2");
        return;
    }

    printf("Prime numbers between %d and %d are: ", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

}







int main(){
   

     int num1,num2;
     printf("Enter the number 1\n");
     scanf("%d",&num1);
     printf("Enter the last number");
     scanf("%d",&num2);

     checkprimenumbers(num1,num2);

      

    return 0;
}