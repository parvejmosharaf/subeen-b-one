/**
 * 
 */
#include <stdio.h>

int main(void){

    printf("Enter a char: ");
    char ch;
    scanf("%c", &ch);
    if(ch >= 'a' && ch<= 'z')
        printf("%c is small character\n", ch);
    if(ch >= 'A' && ch<= 'Z')
        printf("%c is capital character\n", ch);
    else
    {
        printf("Not a character\n");
    }
    
    
    return 0;
}