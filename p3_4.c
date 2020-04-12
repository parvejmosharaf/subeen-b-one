/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    if(n<0)
        printf("number is negative.\n");
    else if (n==0)
    {
        printf("number is zero.\n");
    }
    else
    {
        printf("number is positive.\n");
    }
    
    
    
    return 0;
}