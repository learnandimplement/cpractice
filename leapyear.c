#include <stdio.h>

int main(){
   
     int year;
     scanf("%d",&year);

     if(((year%4 == 0 && year % 100 != 0) || (year % 400 == 0))){
        printf("The %d is a leap year ",year);
     }else{
        printf("The %d is not a leap year ",year);
     }

    return 0;
}