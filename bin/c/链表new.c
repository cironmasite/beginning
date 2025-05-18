#include <stdio.h>
#include <stdlib.h>

struct 链表 {
    char name[34];
    int age;
    struct 链表 *next;
};
typedef struct 链表 lb;

int main() {
    lb *head = NULL, *tail = NULL, *p;
    int i, n;

    printf("输入节点数量：");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        p = malloc(sizeof(lb));
        if(!p) exit(1);

        printf("请输入姓名：");
        scanf("%s", p->name); // 注意：去掉了&
        printf("请输入年龄：");
        scanf("%d", &p->age);

        if(head == NULL) { // 处理第一个节点
            head = p;
            tail = p;
        } else {
            tail->next = p;
            tail = p;
        }
        p->next = NULL;
    }

    // 遍历输出
    p = head;
    while(p != NULL) {
        printf("姓名 %s 年龄 %d \n", p->name, p->age);
        p = p->next;
    }

    // 释放内存
    p = head;
    while(p != NULL) {
        lb *temp = p;
        p = p->next;
        free(temp);
    }
    return 0;
}