// 9. **Reverse a Number** – Reverse the digits of an integer.  

#include <stdio.h>

int main(){
   
     int num1;
     printf("Enter the number that you want reverse");
     scanf("%d",&num1);
     
     int reversednum = 0;

     while(num1!=0){
        int digit = num1 % 10;
        reversednum = reversednum * 10 + digit;
        num1 = num1 / 10;
     }

     printf("Reversed number is %d",reversednum);


    return 0;
}