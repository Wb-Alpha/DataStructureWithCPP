//
// Created by h on 2021-02-03.
//
#include <iostream>

 typedef struct DNode{
    int data;
    struct DNode *prior, *next;
}DNode, *DLinkList;

// 初始化双链表
bool initDLinkList(DLinkList &l){
    l = (DNode *) malloc(sizeof(DNode));
    if (l == NULL)
        return false;
    l->next = NULL;
    l->prior = NULL;
    return true;
}

// 判空
bool empty(DLinkList l){
    if (l->next == NULL)
        return true;
    else
        return false;
}

bool insertNextDNode(DNode *p, DNode *s){
    if (p==NULLL ||s==NULL)
        return false
    s->next = p->next;
    if (p->next != NULL)
        p->next->prior = s;
    s->prior = p;
    p->next = s;
    return true;
}

bool deleteNextDNode(DNode *p){
    if (p==NULL)
        return false;
    DNode *s = p->next;
    if (s==NULL)
        return false;
    s->next = p->next;
    if (s->next != NULL)
        s->next->prior = p;
    free(s);
    return true;
}

// 删除双链表
void destoryList(DLinkList &l){
    while (l->next != NULL)
        deleteNextDNode(l);
    free(l);
    l = NULL;
}

void showDLinkList(DLinkList &l){
    while (l != NULL){
        printf("%d", l->data);
        l = l->next;
    }
}

// 16.设计一个算法测试带头节点带双链表是否对称
void checkSymmetry(DLinkList l){
    DNode *tail = l->prior;
    DNode *head = l->next;
    bool isSymmetry = false;
    while (head != tail){
        if (head->data != tail->data){
            break;
        }
        head = head->next;
        tail = tail->prior;
        if (head == tail){
            isSymmetry = true;
            break;
        }
    }
}