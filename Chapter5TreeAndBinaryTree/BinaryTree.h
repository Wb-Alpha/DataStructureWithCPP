//
// Created by h on 2021-02-23.
//
#include "SqStack.h"
// 定义栈
#define MaxSize 50
typedef struct{
    int data[MaxSize];

};

typedef struct BiNode{
    int data;
    struct BiNode *lchild, *rchild;
}BiNode, *BiTree;

// 打印节点值
void visit(BiNode n){
    std::cout<<n.data<<std::endl;
}

// 将数组数据输入到二叉树中
void assignTreeWithTuple(BiTree &t, int[] data, int size){
    for (int i = 0; i < size; i++){

    }
}

// 非空判断
bool isEmpty(BiTree t){
    if (t->lchild==NULL && t->rchild==NULL){
        return true;
    }
    return false;
}

// 先序遍历的递归算法
void PreOrder(BiTree t){
    if (t != NULL){
        visit(t);
        PreOrder(t->lchild);
        PreOrder(t->rchild);
    }
}

// 中序遍历的递归算法
void InOrder(BiTree t){
    if (t != NULL){
        InOrder(t->lchild);
        visit(t);
        InOrder(t->rchild);
    }
}

// 后序遍历
void AfterOrder(BiTree t){
    if (t != NULL){
        AfterOrder(t->lchild);
        AfterOrder(t->rchild);
        visit(t);
    }
}

// 中序遍历转非递归
void InOrder2(BiTree t){
    BiTree p=t;
    SqStack s;
    initStack(s);
    while (p || isEmpty(s)){
        if (p){
            push(s,p);
            p = p->lchild;
        }
        else{
            pop(s,p);
            visit(p);
            p = p->rchild;
        }
    }
}
