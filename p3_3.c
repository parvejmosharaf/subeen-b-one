/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Number is positive.\n");
    }
    else if (n<0)
    {
        printf("number is negative.\n");
    }
    else if (n==0)
    {
        printf("The number is zero.\n");
    }
    
    
    
    
    return 0;
}