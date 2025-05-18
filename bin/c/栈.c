#include <stdio.h>

// 定义栈结构体
typedef struct Stack{
    int data[5];
    int top; // 栈顶指针
}Stack;

// 入栈
void push(struct Stack *stack, int v) {
    if (stack->top == 5) {
        printf("栈已满，无法入栈\n");
        return;
    }
    stack->data[stack->top] = v;
    stack->top++;
}

// 出栈
int pop(struct Stack *stack) {
    if (stack->top == 0) {
        printf("栈为空，无法出栈\n");
        return -1;
    }
    stack->top--;
    return stack->data[stack->top];
}

// 打印栈
void printStack(struct Stack *stack) {
    for (int i = 0; i < stack->top; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

// 计算长度
int length(struct Stack *stack) {
    return stack->top;
}

int main() {
    // 实现一个栈
    struct Stack stack;
    stack.top = 0;

    // 模拟入栈
    push(&stack, 1);
    printStack(&stack);
    int len = length(&stack);
    printf("栈长度为：%d\n", len);
    push(&stack, 2);
    printStack(&stack);
    len = length(&stack);
    printf("栈长度为：%d\n", len);
    pop(&stack);
    printStack(&stack);
    len = length(&stack);
    printf("栈长度为：%d\n", len);

    return 0;
}

