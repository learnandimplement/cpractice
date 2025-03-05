// **Even or Odd** – Check if a number is even or odd.
#include <stdio.h>

int main(){
   
     int num1;
     printf("Enter the Number ");
     scanf("%d",&num1);

     if(num1 % 2 == 0){
        printf("The number is Even");
     }else{
        printf("The number is Odd");
     }

    return 0;
}