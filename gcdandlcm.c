#include <stdio.h>


int findgcd(int num1,int num2){
    int gcd;
    for(int i=1;i<=num1 && i <=num2;i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }

    return gcd;
}

int findlcm(int num1,int num2,int gcd){
    return (num1*num2)/ gcd;
}

int main(){
   
     int num1 = 12;
     int num2 = 18;

     int gcd = findgcd(num1,num2);
     printf("the GCD is %d ",gcd);

     int lcm = findlcm(num1,num2,gcd);
     printf("the LCM is %d ",lcm);

    return 0;
}