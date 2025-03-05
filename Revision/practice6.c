// 10. **Palindrome Number** – Check if a number is a palindrome (e.g., 121, 454).

#include <stdio.h>


int isPalindrome(int num1){
    
     if(num1 <0){
        return 0;
     }
     
     if(num1 == 0){
        return 1;
     }
     

     int originalnumber = num1;
     int reversednumber = 0 ;

     while(num1!=0){
        int digit = num1 % 10;
        reversednumber = reversednumber * 10 + digit;
        num1 = num1/10;
     }

     if(originalnumber == reversednumber){
        return 1;
     }else {
        return 0;
     }

}

int main(){
   
     int num1;
     printf("Enter the number\n");
     scanf("%d",&num1);

     if(isPalindrome(num1)){
        printf("The number is palindrome");
     }else {
        printf("The number is not palindrome");
     }

    return 0;
}