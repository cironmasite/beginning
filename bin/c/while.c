#include <stdio.h>

int main() {
    int a =5;

    while (a>0)
    {
        a--;
        printf("%d\n",a);

    }
    printf("you can go out");   //while 常见用法求共和值int a=1;
    ;                           //int b=0;
    ;                           //while (a<=5){
    ;                           //b=b+a;
    ;                           //a++;}  此法得出得到b值为1到5的和。
    ;   /*do while 循环
    int a=5;
    int b=0
    int c=0;
    do{
        printf("%d\n",a);
        scanf("%d",&b);
        c++;

        if(b>a){
            Printf("you are right");
}
        if(b<a){
            printf("you are wrong");
}
}while(a !=b);
    printf("you have %d times",c);          用了c次猜中a的值是多少。
    用for循环语句实现1到3的和：
    int i;
    int sum=0;
    for(i=1;i<=3;i++){
        sum+=i;}
        printf("%d",sum);*/
    return 0;
}