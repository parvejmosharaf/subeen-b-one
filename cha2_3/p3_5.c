/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if(num>10){
        printf("The number is gater than 10.\n");
    }
    else
    {
        printf("number is less than 10.\n");
    }
    
    
    return 0;
}