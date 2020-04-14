/**
 * The programmer about vowel or consonend.
 */
#include <stdio.h>

int main(void){

    printf("Enter a char to check vowel or consonend: ");
    char ch;
    scanf("%c", &ch);

    if ( (ch >='a' && ch >= 'z') || (ch >= 'A' && ch <= 'Z') )
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("%c is vowel.\n", ch);
        }
        else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("%c is vowel.\n", ch);
        }
        else
        {
            printf("%c is consonend\n", ch);
        }
        
    }

    else
    {
        printf("Not a character.\n");
    }
    
    
    return 0;
}