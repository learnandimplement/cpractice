#include <stdio.h>
int main(){
     
   char str[120];
   printf("Enter the String ->");
   scanf("%s",str);
   printf("%s\n",str);

   int vowel = 0;
   int consonant = 0;

   for(int i=0;str[i] != '\0' ;i++){
      char c = str[i];
      if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
         vowel++;
      } else {
         consonant++;
      }
   }
   printf("Count of Vowels -> %d\nCount of consonants -> %d",vowel,consonant);

   return 0;
}