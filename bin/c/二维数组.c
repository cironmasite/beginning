#include <stdio.h>
int main(){
    int a[2][2] = {{1,2},{3,4}};
    printf("%d \n",a[1][0]);
    printf("%d \n",a[1][1]);
    printf("%d \n",a[0][1]);
    printf("%d \n",a[0][0]);
    return 0;
}