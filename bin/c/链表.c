#include <stdio.h>
#include <stdlib.h>



struct lianbiao {
    char name[34];
    int age;
    struct lianbiao *next;
};
typedef struct lianbiao lb;
int main() {
lb* head, *tail, *p;
int i, n;   
p=(struct lianbiao *)malloc(sizeof(struct lianbiao));   //向堆空间申请内存，malloc需要用到头文件 #include <stdlib.h>

head = p;
tail = p;
head->next = NULL;
printf("输入节点数量：");
scanf("%d", &n);
for ( i = 0; i < n; i++)

{
    p=(struct lianbiao*)malloc(sizeof(struct lianbiao));
    printf("请输入姓名：");
    scanf("%s",p->name);
    printf("请输入年龄：");
    scanf("%d",&p->age);
    tail->next = p;
    tail = p;
    p->next = NULL;
}
    p=head->next;
    while(p!=NULL)
    {
        printf("姓名 %s 年龄 %d \n", p->name, p->age);
        p=p->next;
    
    }
    p = head;
while(p != NULL) {
    lb *temp = p;
    p = p->next;
    free(temp);
}
    return 1;
}

// int main(void) {// struct lianbiao *a = (struct lianbiao *)malloc(sizeof(struct lianbiao));    
//     if (a == NULL)
//     {
//         return NULL;   
//     }
    
//     struct lianbiao *b = (struct lianbiao *)malloc(sizeof(struct lianbiao));
//     if (b == NULL)
//     {
//         return NULL;   
//     }
//     struct lianbiao* list = NULL;
    
//     list = a;
//     a->next = b;
//     b->next = NULL;

//     free(a);
//     free(b);
//     return 0;
// }
