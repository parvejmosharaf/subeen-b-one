/**
 * 
 */
#include <stdio.h>

int main(void){
    int num1, num2, value;
    char sign;

    printf("\nEnter two num by space: ");
    scanf("%d %d", &num1, &num2);
    sign = '+';
    value = num1 + num2;
    printf("%d %c %d = %d \n",num1, sign, num2, value);

    sign = '-';
    value = num1 - num2;
    printf("%d %c %d = %d \n",num1, sign, num2, value);

    sign = '*';
    value = num1 * num2;
    printf("%d %c %d = %d \n",num1, sign, num2, value);

    sign = '/';
    value = num1 / num2;
    printf("%d %c %d = %d \n",num1, sign, num2, value);

    return 0;
}