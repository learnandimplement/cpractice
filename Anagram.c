#include <stdio.h>
#include <string.h>

int checkanagram(char str1[],char str2[]){
    if(strlen(str1) != strlen(str2)){
        return 0;
    }

    int freq1[256] = {0};
    int freq2[256] = {0};

    for(int i=0;str1[i]!= '\0';i++){
        freq1[(int)str1[i]]++;
    }
    for(int i=0;str2[i]!= '\0';i++){
        freq2[(int)str2[i]]++;
    }

    printf("Charactre Freq ");
    for(int i=0;i<256;i++){
        if(freq1[i]>0){
            printf("'%c' -> %d times \n",i,freq1[i]);
        }
    }

    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            return 0;
        }

    }

    return 1;
}


int main(){
   
     char str1[100];
     char str2[100];
     printf("Enter the first string\n");
     scanf("%s",str1);
     printf("Enter the second String\n");
     scanf("%s",str2);

     
     if(checkanagram(str1,str2)){
        printf("The Strings are anagram");
     }else {
        printf("The Strings are not anagram");
     }

    return 0;
}