// 12. **Armstrong Number** – Check if a number is an Armstrong number (e.g., 153). 

#include <stdio.h>

int main(){
    int num1;
    printf("Enter the number that you want to check armstrong\n");
    scanf("%d",&num1);
    int originalnumber = num1;
    int number =0;

    while(num1 !=0){
        int digit = num1 % 10;
        number = number + digit * digit * digit;
        num1 = num1/10;
    }

    printf("%d\n",number);
       
    if(originalnumber == number){
       printf("The number is armstrong");
    }else {
       printf("The number is not armstrong");
    }

    return 0;
}