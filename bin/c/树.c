#include <stdio.h>
#include <stdlib.h>


typedef struct BiTNode {
    char data;  //数据域
    struct BiTNode *l, *r;  //左右子树
} BiTNode, *BiTree;

int main() {
BiTree root = NULL; //根结点
root = (BiTree)malloc(sizeof(BiTNode));
root->data = 'A';
root->l = NULL;
root->r = NULL;

//插入节点B
BiTNode *BNode = NULL;
BNode = (BiTNode *)malloc(sizeof(BiTNode));
BNode->data = 'B';
BNode->l = NULL;
BNode->r = NULL;
root->l = BNode;

//插入节点C
BiTNode *CNode = NULL;
CNode = (BiTNode *)malloc(sizeof(BiTNode));
CNode->data = 'C';
CNode->l = NULL;
CNode->r = NULL;
root->r = CNode;


    printf("root->data = %c\n", root->data);
    printf("root->l->data = %c\n", root->l->data);
    printf("root->r->data = %c\n", root->r->data);
    return 0;
}