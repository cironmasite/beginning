#include <stdio.h>

typedef struct D
{
    int data[3];
    int front;
    int rear;
} D;

void init(D *d)     //初始化队列
{
    d->front = 0;
    d->rear = 0;
}

//入队
void r(D *d, int x)
{
    if (d->rear == 3)
    {
        printf("队列已满\n");
        return;
    }
    d->data[d->rear] = x;
    d->rear++;
}

//出队
void c(D *d)
{
    if (d->front == d->rear)
    {
        printf("队列已空\n");
        return;
    }
    printf("%d\n", d->data[d->front]);
    d->front++;
}

//计算队列长度
int l(D *d)
{
    return d->rear - d->front;
}

//打印队列
void p(D *d)
{
    for (int i = d->front; i < d->rear; i++)
    {
        printf("%d ", d->data[i]);
    }
    printf("\n");
}

int main()
{
    //实现一个队列
    struct D d;
    init (&d);

    r(&d,1);
    p(&d);

    return 0;
}
