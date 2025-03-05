// 11. **Fibonacci Series** – Print the first `n` Fibonacci numbers.

#include <stdio.h>

int main(){
   
    int num1;
    int prev = 0;
    int last = 1;
    int next=0;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&num1);

    for(int i=0;i<num1;i++){
        printf("%d ",next);
        next = prev + last;
        prev = last;
        last = next;
    }


    return 0;
}