#include <stdio.h>

int main(){
    
     int num1;
     scanf("%d",&num1);
     
     int num2;
     scanf("%d",&num2);

     char cha;
     scanf(" %c",&cha);

     switch (cha)
     {
     case '+':
         printf("The addition is %d" , num1 + num2);
        break;
        case '-':
        printf("The subtraction is %d" , num1 - num2);
       break;
       case '*':
       printf("The multiplication is %d" , num1 * num2);
      break;
      
      case '/':
      if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("The division is %.2f\n", (float)num1 / num2);
    }
     break;
     
     default:
     printf("You entered the wrong operator");
        break;
     }

  

    return 0;
}