//
// Created by h on 2021-02-23.
//

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

