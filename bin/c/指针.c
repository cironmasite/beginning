#include <stdio.h>

int main() {
    int money = 100;
    int *p = &money;

    *p = 200;
    printf("money = %d", money);
    return 0;
}