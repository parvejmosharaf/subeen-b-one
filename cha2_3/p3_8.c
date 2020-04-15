/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a number to check even/odd: ");
    int x ;
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("Number is even.\n");
    }else
    {
        printf("Number is odd\n");
    }
    
    
    return 0;
}