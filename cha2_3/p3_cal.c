/**
 * Simple calculator
 */
#include <stdio.h>

int main(void){

    int num1, num2;
    char sym;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter sym: ");
    scanf("%c", &sym);
    scanf("%c", &sym);

    printf("Enter num2: ");
    scanf("%d", &num2);
    if(sym == '+')
        printf("%d %c %d = %d\n", num1, sym, num2, num1+num2);
    else if (sym == '-')
    {
        printf("%d %c %d = %d\n", num1, sym, num2, num1-num2);
    }
    else if (sym == '*'){
        printf("%d %c %d = %d\n", num1, sym, num2, num1*num2);
    }
    
    else if (sym == '/')
    {
        if(num2 == 0)
            printf("Undefine.\n");
        printf("%d %c %d = %d", num1, sym, num2, num1/num2);
    }
    else
    {
        printf("There is a problem with your input please check again!\n");
    }
    
    
    return 0;
}