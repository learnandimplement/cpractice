#include <stdio.h>

int main(){
   char c[20];
   printf("Enter the string ->");
   scanf("%s",c);
   printf("Your String : %s",c);
   int len = 0;
   for(int i=0;c[i] != '\0';i++){
        len++   ;
   }
   for(int i=0,j=len-1; i <= len / 2;i++,j-- ) {
        char temp = c[j];
        c[j] = c[i];
        c[i] = temp;
   }
   printf("\nReverse String -> %s",c);
    return 0;
}