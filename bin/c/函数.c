#include <stdio.h>

void hello();
int c(int a,int b);
int main(){
    hello();
    int sum=c(1,2);
    printf("sum=%d\n",sum);
    return 0;
}
//无参函数
void hello(){
    printf("hello world\n");
}
//有参函数
int c(int a,int b){
    return a+b;

}