// 11. Palindrome String - check is a string is a palindrome

#include <stdio.h>

int main(){
   
    char str[120];
    printf("Enter the string \n");
    scanf("%s",str);
   
    int length = 0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }

    printf("The entered String is %s and length is %d ",str,length);

    int ispalindrome = 1;

    for(int i=0;i<length/2;i++){
        if(str[i] != str[length-1-i]){
            return ispalindrome = 0;
        }

    }

    if(ispalindrome){
        printf("The String is palindrome");
    }else {
        printf("The String is not palindrome");
    }


    return 0;
}