#include <stdio.h>

    int main() {
        unsigned int a;
        printf("What is a equal to \n");
        scanf("%d", &a);
        if(a>100){
            printf("a is greater than perfect");
        }else if (a>=80 && a<100){
            printf("a is greater than good");
        }else if (a>=60 && a<80){
            printf("a is greater than ccb");
        }else if (a < 60 && a > 0) { 
            printf("a is bad but not zero");
        }else if (a ==0){ 
            printf("a is zero");
        }
        
        return 0;
    }