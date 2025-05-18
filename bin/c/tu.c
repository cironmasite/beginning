#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 6
typedef char VertexType;

//边表节点
typedef struct ArcNode{
    int adjvex; //该边所指向的顶点的位置
    struct ArcNode *nextarc; //指向下一条边的指针
}ArcNode;

//顶点表节点
typedef struct VNode{
    VertexType data; //顶点信息
    ArcNode *first; //指向第一条依附该顶点的边的指针
}VNode,AdjList[MAX_SIZE];

//邻接表的图结构
typedef struct{
    AdjList vertices; //顶点数组
    int vexnum,arcnum; //顶点数和边数
}ALGraph;

// 在InitGraph函数前添加
int findVertexIndex(ALGraph *G, VertexType c) {
    for(int i=0; i<G->vexnum; i++){
        if(G->vertices[i].data == c)
            return i;
    }
    return -1;
}
void InitGraph(ALGraph *G){
    //顶点表初始化
    for(int i=0;i<MAX_SIZE;i++){
        G->vertices[i].first = NULL;
    }
    printf("请输入顶点数 边数:\n");
    scanf("%d %d",&G->vexnum,&G->arcnum);
    //建立顶点表
    for(int i=0;i<G->vexnum;i++) {
        printf("请输入第%d个顶点的值:\n", i + 1);
        scanf(" %c",&G->vertices[i].data);
        G->vertices[i].first = NULL;
    }
    //建立边表
    char i1, i2;
    for(int i=0;i<G->arcnum;i++){
        printf("请输入顶点i1 i2:\n");
        scanf(" %c %c", &i1, &i2);
        int v1 = findVertexIndex(G, i1);
        int v2 = findVertexIndex(G, i2);
        if(v1 == -1 || v2 == -1){
            printf("输入顶点不存在！\n");
            return;
        }
        ArcNode *p = (ArcNode *)malloc(sizeof(ArcNode));
        p->adjvex = v2;
        p->nextarc = G->vertices[v1].first;
        G->vertices[v1].first = p;

    }

}


//队列
#define Maxsize 6
typedef struct{
    int data[Maxsize];
    int front,rear;                                         //队头指针和队尾指针
} D;

//初始化队列(带头结点)
void InitQueue(D *Q) {  
    Q->front = Q->rear = 0;
    printf("辅助队列初始化成功\n");
}

//判断队列是否为空
bool IsEmpty(D Q){
     return Q.front == Q.rear;
}

//入队
bool En(D *Q, int e){  
    if((Q->rear + 1) % Maxsize == Q->front )return false;
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear + 1) % Maxsize;
    return true;
}

//出队
bool De(D *Q, int *e){  // 改为指针类型
    if(IsEmpty(*Q)) return false;
    *e = Q->data[Q->front];
    Q->front = (Q->front + 1) % Maxsize;
    return true;
}

//广度优先遍历
bool BFS[MAX_SIZE];
void BFS1(ALGraph G, int x) {                                //x为起始顶点
    for(int i=0;i<G.vexnum;i++)
        BFS[i] = false;
    D Q;
    InitQueue(&Q);                                           //初始化队列
    En(&Q,x);                                                //入队顶点x下标
    printf("对_%c_进行广度优先遍历:", G.vertices[x].data);
    BFS[x] = true;                                           //标记顶点已访问
    ArcNode *p;
    while(IsEmpty(Q) == false){                               //队列不为空
        De(&Q, &x);                                             //队头出队进入v标记为true
        p = G.vertices[x].first;
        while(p != NULL){                                   //遍历边表找出该顶点的所有边
            if(BFS[p->adjvex] == false){
                printf("%c ", G.vertices[p->adjvex].data);                   //输出顶点
                BFS[p->adjvex] = true;
                En(&Q, p->adjvex);                           //顶点下标入队
            }
            p = p->nextarc;
        }
        
    }
    printf("\n");

}


//深度优先遍历
bool DFS[MAX_SIZE];
void DFS1(ALGraph G, int x){
    for(int i=0;i<G.vexnum;i++)
        DFS[i] = false;
    
    ArcNode *p;
    p = G.vertices[x].first;
    printf("%c ", G.vertices[x].data);
    DFS[x] = true;
    while (p)
    {
        int j = p->adjvex;
        if (DFS[j] == false)    
        {
            DFS1(G, j);
        }
        p = p->nextarc;
        
    }
    printf("\n");
}


int main(){
    printf("一个简单的有向图\n");
    ALGraph G;
    InitGraph(&G);
    printf("你想要如何遍历?\n 0. 广度优先遍历\n 1. 深度优先遍历\n");
    int choice;
    scanf("%d",&choice);
    if(choice == 0){
        printf("请输入起始顶点:\n");
        char x;
        scanf(" %c", &x);
        int index = findVertexIndex(&G, x);
        if(index == -1){
            printf("顶点不存在！\n");
            return 1;
        }
        BFS1(G, index);  // 传递索引而不是字符
        
    }
    
    else if(choice == 1){
        printf("请输入起始顶点:\n");
        char x;
        scanf(" %c", &x);
        int index = findVertexIndex(&G, x);
        if(index == -1){
            printf("顶点不存在！\n");
            return 1;
        }
        DFS1(G, index);  // 传递ALGraph和索引
    }
    
    
    

    return 0;
}