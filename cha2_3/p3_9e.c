/**
 * 
 */
#include <stdio.h>

int main(void){

    int num;
    printf("Enter a number to check even/odd: ");
    scanf("%d", &num);

    if((num/2) * 2 == num){
        printf("even\n");
    }else
    {
        printf("odd\n");
    }
    
    
    return 0;
}