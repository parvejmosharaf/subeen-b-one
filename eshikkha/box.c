/**
 * 
 */

#include <stdio.h>

int main(void){
    int n,t,x;
    scanf("%d", &t);
    for(int i =0; i<t; i++){
        scanf("%d", &n);
        scanf("%d", &x);

        if(n%x ==0){
            printf("Possible\n");
        }
        else
        {
            printf("Impossible\n");
        }
        
    }
    
    return 0;
}