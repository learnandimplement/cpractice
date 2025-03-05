#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int isPalindrome(char str1[]){
     
     int length = strlen(str1);

     for(int i=0;i<length/2;i++){
        if (str1[i] != str1[length - i - 1]) {
            return 0; 
     }
   }
   return 1;
}

int main(){
   
    char str1[100];
    printf("Enter the String ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("The string is %s",str1);
    
    printf("The length of string is %d \n",strlen(str1));
   
     
    if(isPalindrome(str1)){
        printf("The string is palindrome");
    }else {
        printf("The given string is not palindrome");
    }




    return 0;
}