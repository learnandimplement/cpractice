#include <stdio.h>
#include <string.h>

int main(){
   
     
    char str[120];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int length = 0;
    for(int i=0;str[i] != '\0';i++){
        length++;
    }

    for(int i=0;i<length/2;i++){
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }

    printf("The length of the string is %d \n",length);
    printf("The reversed String is %s \n",str);
    
    return 0;
}