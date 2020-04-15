/**
 * use of "if and else if"
 */
#include <stdio.h>

int main(void){

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if(num<30){
        printf("Num is less than 30.\n");
    }
    else if(num < 50){
        printf("Num is less than 50.\n");
    }
    return 0;
}