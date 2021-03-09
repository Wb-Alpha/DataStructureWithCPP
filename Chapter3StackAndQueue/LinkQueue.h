//
// Created by h on 2021-03-03.
//
typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front, *rear;
}LinkQueue;

// 初始化
void initQueue(LinkQueue &q){
    q.front=q.rear=(LinkNode*)malloc(sizeof (LinkNode));
    q.front->next=NULL;
}

bool isEmpty(LinkQueue q){
    if (q.front == NULL){
        return true;
    } else{
        return false;
    }
}

// 入队
void enterQueue(LinkQueue &q, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof (LinkNode));
    s->data = x;
    s->next = NULL;
    q.rear->next = s;
    q.rear = s;
}

// 入队（不带头结点
void enterQueueWithoutHeader(LinkQueue &q, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof (LinkNode));
    s->data = x;
    s->next = NULL;
    if (q.front == NULL){
        q.front = s;
        q.rear = s;
    }
    else{
        q.rear->next = s;
        q.rear = s;
    }
}

// 出队（带头节点
bool deQueueWithHeader(LinkQueue *q, int &x){
    if (q->front == q->rear)
        return false;
    LinkNode *p = q.front->next;
    x = p->next;
    q->front->next = p->next;
    if (q->rear == p)
        q->rear = q->front;
    free(p);
    return true;
}

// 出队（不带头结点
bool deQueueWithoutHeader(LinkQueue &q, int &x){
    if (q.front == NULL){
        return false;
    }
    LinkNode *p = q.front;
    x = p->data;
    q.front = p->next;
    if (q.rear == p){
        q.front = NULL;
        q.rear = NULL;
    }
    free(p);
    return true;
}

