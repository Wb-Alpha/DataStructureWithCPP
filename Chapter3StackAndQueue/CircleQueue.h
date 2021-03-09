//
// Created by h on 2021-03-08.
//

#ifndef CHAPTER3STACK_CIRCLEQUEUE_H
#define CHAPTER3STACK_CIRCLEQUEUE_H

#endif //CHAPTER3STACK_CIRCLEQUEUE_H

#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int tag;
    int front;
    int rear;
}CircleQueue;

void init(CircleQueue &q){
    q.tag = 0;
    q.front = q.rear = 0;
}

void enQueue(CircleQueue &q, int x){
    if (q.front==q.rear && tag==1){
        std::cout<<"队列已满"<<std::endl;
        return;
    }
    q.tag = 1;
    q.data[q.rear] = x;
    q.rear = (q.rear+1)%MaxSize;
}


void seQueue(CircleQueue &q){
    if (q.rear==q.front && tag==0){
        std::cout<<"队列已空"<<std::endl;
        return;
    }
    q.tag = 0;
    q.data[q.front] = 0;
    q.front = (q.front+1)%MaxSize;
}