/**
 * 
 */
#include <stdio.h>

int main(void){

    int num, temp, rem;
    printf("Enter a number to check even/odd: ");
    scanf("%d", &num);
    temp = num;
    int x1 = temp/2;
    rem = num - (x1 * 2);

    if(rem == 0){
        printf("even\n");
    }else
    {
        printf("odd\n");
    }
    
    
    return 0;
}