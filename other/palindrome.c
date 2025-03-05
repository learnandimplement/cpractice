#include <stdio.h>

int main(){
    
    int num1;
    printf("enter the number that you want to check factorial ");
    scanf("%d",&num1);
   
     int originalnum = num1;
     
     int reveresednum = 0;

     while(num1!=0){
        int digit = num1 % 10; 
        reveresednum = reveresednum *10 + digit;
        num1 = num1 / 10;
     }
     
     printf("The reversed numer is %d \n",reveresednum);
     

     if(originalnum == reveresednum){
        printf("The number is palindrome");
     }else {
        printf("The number is not palindrome");
     }




     

    return 0;
}