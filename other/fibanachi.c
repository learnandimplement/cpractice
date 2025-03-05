#include <stdio.h>

int main(){
    
    
    int prev = 0;
    int last = 1;
    int next;

    for(int i=0;i<=10;i++){
        next = prev + last;
        prev = last;
        last = next;
        printf("%d\n",next);
    }



    return 0;
}