//
// Created by h on 2021-03-03.
//

#define MaxSize 20
typedef struct {
    int data[MaxSize];
    int front, rear;
    int size;
}SeqQueue;

// 初始化队列
void initQueue(SeqQueue &q){
    q.rear=q.front=0;
    q.size = 0;
}

// 判空
bool isQueueEmpty(SeqQueue &q){
    if (q.rear==q.front){
        return true;
    } else{
        return false;
    }
}

// 入队
bool enterQueue(SeqQueue &q, int x){
    if (q.rear == q.front){
        return false;
    }
    q.data[q.rear] = x;
    q.rear=(q.rear+1)%MaxSize;
    return true;
}


// 出队
bool deQueue(SeqQueue &q, int &x){
    if (q.rear == q.front)
        return false;
    x = q.data[q.front];
    q.front = (q.front+1)%MaxSize;
    return true;
}

// 求长度
int length(SeqQueue q){
    return (q.rear+MaxSize-q.front);
}