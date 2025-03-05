// 15. **Reverse a String** – Reverse a string without using built-

#include <stdio.h>

int main(){
     
    char str[120];
    printf("Enter the string\n");
    scanf("%s",str);
    printf("The entered string is %s\n ",str);

    int length = 0;
    for(int i=0;str[i] != '\0';i++){
        length++;
    }

    printf("The length of the string is %d \n " , length);

    for(int i=0;i<length/2;i++){
        char temp = str[i];
        str[i] = str[length - 1- i];
        str[length - 1 - i] = temp;
    }

    printf("The reversed String is %s ",str);

    return 0;
}