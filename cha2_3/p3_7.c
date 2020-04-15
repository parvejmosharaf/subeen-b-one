/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if(num<30){
        printf("The number is less than 30\n");
    }
    if(num < 50){
        printf("Number is less than 50.\n");
    }
    
    return 0;
}