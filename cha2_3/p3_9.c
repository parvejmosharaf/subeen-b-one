/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a number: ");
    int num, rem;
    scanf("%d", &num);
    rem = num %2;
    if(rem == 0)
        printf("even\n");
    else
    {
        printf("odd\n");
    }
    
    
    return 0;
}