#include <stdio.h>

int main(){
   char c[20];
   printf("Enter the string ->");
   scanf("%s",c);
   printf("Your String : %s",c);
   int len = 0;
   for(int i=0;c[i] != '\0';i++){
        len++;
   }
   char rStr[len+1];
   for(int i = len-1,j=0;i>=0 ;i--){
        rStr[j++] = c[i];
   }
   rStr[len] = '\0';
   printf("\nReverse String -> %s",rStr);
    return 0;
}