#include <stdio.h>

int main() {

    // printf("你想要什么答案？");
    // int a;
    // scanf("%d",&a);
    // printf("%d",a);

    double a,b,c;
    char name[20];
    printf("your name and your score is? \n");
    scanf(" %s %lf %lf %lf",name,&a,&b,&c);
    
    printf(" %s dezongfengshi (%.1f + %.1f + %.1f)*1.2 = %.1f",name,a,b,c,(a+b+c)*1.2);

    return 0;
}