//
// Created by h on 2021-01-31.
#include "stdlib.h"
#include <cstdlib>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

// 不带头结点的初始化
bool initListWithoutHeader(LinkList &l){
    l = NULL;
    return true;
}

// 创建一个递增的序列
void createIncreaseLinkList(LinkList &l, int size, int maxStep){
    l = (LinkList)malloc(sizeof (LinkList));
    l->next = NULL;
    srand((unsigned)time(NULL));
    LNode *p = l, *s;
    for (int i=0; i<size; i++){
        int x = rand()%maxStep;
        s = (LNode*)malloc(sizeof(LNode));
        if (p==l){
            s->data = x;
        }
        else{
            s->data = x+p->data;
        }
        s->next = NULL;
        p->next = s;
        p = p->next;
    }
}

// 导入数组以创建链表
void createListWithTuple(LinkList &l, int data[]){
    int length = sizeof(data);
    LNode *p = l;
    for (int i = 0; i < length; i++){
        LNode *n = (LNode*)malloc(sizeof(LNode));
        n->data = data[i];
        n->next = NULL;
        p->next = n;
        p = p->next;
    }
}

// 尾插法建立单链表
LinkList createListWithTailInsert(LinkList &l, int size, int range){
    if (size <= 0){
        std::cout<<"错误：长度不能小于1"<<std::endl;
    }
    srand((int)time(0));
    l = (LinkList)malloc(sizeof(LNode));
    LNode *s,*r = l;
    for (int i = 0; i < size; i++)
    {
        int x = rand()%range;
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
    }
    r->next = NULL;
    return l;
}

// 头插法创建单链表
LinkList createListWithHeadInster(LinkList& l){
    LNode *s;
    int x;
    l = (LinkList)malloc(sizeof(LNode));
    l->next = NULL;
    scanf("%d", &x);
    while (x != 9999){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = l->next;
        l->next = s;
        scanf("%d", &s);
    }
    return l;
}


// 带头节点的初始化(后续写代码更容易
bool initListWithHeader(LinkList &l){
    l = (LNode *)malloc(sizeof(LNode));
    if (l == NULL){
        return false;
    }
    l->next = NULL;
    return true;
}

// 在第i个位置插入元素e（带头节点）
bool insertWithHeader(LinkList &l, int i, int e){
    if (i<1)
        return false;
    LNode *p;   // 指向当前扫描到的节点
    int j = 0;  // 当前p指向了第几个节点
    p = l;      // 令p指向l的头节点
    while (p != NULL && j < i-1){
        p = p->next;
        j++;
    }
    if (p == NULL) {
        return NULL;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return s;
}

// 在第i个位置插入元素e（不带头结点
bool insertWithoutHeader(LinkList &l, int i, int e){
    if (i<1)
        return false;
    if (i == 1){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = l;
        l = s;
        return true;
    }
    LNode *p;
    int j=1;
    p = l;
    while (p != NULL && j<i-1){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

// 在p节点之后插入元素e
bool insertNextNode(LNode *p, int e){
    if (p ==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s == NULL)
        return false;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

// 在p节点之前插入元素e
bool insertPriorNode(LNode *p , int e){
    if (p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s == NULL){
        return false;
    }
    s->next = p->next;
    p->next = s;
    s->data=p->data;
    p->data = e;
    return true;
}

// 删除第i个节点
bool deleteWithHeader(LinkList &l, int i, int e){
    if (i<1)
        return false;
    LNode *p;
    int j = 0;
    p = l;
    while (p != NULL && j < i-1){
        p  = p->next;
        j++;
    }
    if (p == NULL){
        return false;
    }
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

// 删除指定节点p(不适用删除最后一个节点
bool deleteNode(LNode *p){
    if (p == NULL)
        return false;
    LNode *q = p->next;
    p->data = p->next->data;
    p->next = q->next;
    free(q);
    return true;
}

// 查找第i个元素的值
LNode * getElemWithIndex(LinkList l, int i){
    if (i<0)
        return NULL;
    LNode *p;
    int j = 0;
    p = l;
    while (p != NULL && j < i){
        p = p->next;
        j++;
    }
    return p;
}

// 查找值为e的元素
LNode * locateElem(LinkList l, int e){
    LNode *p = l->next;
    while ( p != NULL && p->data != e)
        p = p->next;
    return p;
}

int length(LinkList l){
    int len = 0;
    LNode *p = l;
    while (p->next != NULL){
        p = p->next;
        len++;
    }
    return len;
}

void showLinkList(LinkList l){
    LNode *p = l->next;
    while (p != NULL){
        std::cout<<p->data<<" ";
        p = p->next;
    }
}

// 1.设计一个递归算法，删除带头节点的单链表L中所有值为x的节点
void deleteAllXInLinkListWithRecursion1(LinkList &l, int x){
    if (l->next == NULL){
        return;
    }
    if (l->next->data == x){
        LNode *n = l->next;
        l->next = n->next;
        free(n);
    }
    deleteAllXInLinkListWithRecursion1(l->next, x);
}

void deleteAllXInLinkListWithRecursion2(LinkList &l, int x){
    LNode *p;
    if (l == NULL){
        return;
    }
    if (l->data == x){
        p = l;
        l = l->next;
        free(p);
        deleteAllXInLinkListWithRecursion2(l, x);
    }
    else{
        deleteAllXInLinkListWithRecursion2(l->next, x);
    }
}


// 2.删除所有值为x的节点
void deleteAllXInLinkList(LinkList &l, int x){
    LNode *p = l;
    while (p->next != NULL){
        if (p->next->data == x){
            LNode* temp;
            temp = p->next;
            p->next = temp->next;
            free(temp);
        }
        else{
            p = p->next;
        }
    }
}


// 3.从头到尾反向输出每个结点的值
void reverseOutputLinkList(LinkList l){
    if (l->next == NULL){
        return;
    }
    reverseOutputLinkList(l->next);
    std::cout<<l->next->data<<" ";
}

// 4.删除值最小的节点
void deleteMin(LinkList &l){
    int min = INT_MAX;
    LNode *minPreNode = (LNode*)malloc(sizeof (LNode));
    LNode *p = l;
    while(p->next != NULL){
        if (min > p->next->data){
            min = p->next->data;
            minPreNode = p;
        }
        p = p->next;
    }

    LNode *n = minPreNode->next;
    minPreNode->next = n->next;
    free(n);
}


// 5. 就地逆置单链表
// 依然使用了辅助空间
LinkList reverseLinkListOnTheSpot(LinkList l){
    LinkList s = (LinkList)malloc(sizeof (LNode));
    LNode *p = l->next;
    while (p != NULL){
        LNode *n = (LNode*)malloc(sizeof (LNode));
        n->next = s;
        s->data = p->data;
        s = n;
        p = p->next;
    }
    return s;
}

LinkList reverseLinkListOnTheSpot1(LinkList l){
    LNode *p, *r;
    p = l->next;
    l->next = NULL;
    while (p != NULL){
        r = p->next;
        p->next = l->next;
        l->next = p;
        p = r;
    }
    return l;
}

// 6.排序带头节点的单链表，使得其元素递增
// 直接插入排序
void sortLinkListIncremental(LinkList &l){
    LNode *p = l->next, *pre;
    LNode *r = p->next;
    p->next = NULL;
    p = r;
    while (p != NULL){
        r = p->next;
        pre = l;
        while (pre->next != NULL && pre->next->data < p->data){
            pre = pre->next;
        }
        p->next = pre->next;
        pre->next = p;
        p = r;
    }
}


// 7. 删除单链表中指定值区间的节点
void deleteNodeInRange(LinkList &l, int min, int max){
    LNode *p = l;
    while (p->next != NULL){
        if (p->next->data<max && p->next->data>min){
            LNode *tmp = p->next;
            p->next = tmp->next;
            free(tmp);
        }
        p = p->next;
    }
}


// 8. 给定两个单链表，找到他们的公共节点
void findPublicNodeBetweenTwoLinkList(LinkList a, LinkList b){
    // 注意公共节点的定义
}

// 9.按照递增次序数除单链表中各个节点的元素，并且释放节点内存空间
void showAndReleaseAllNodeInLinkList(LinkList &l){
    while (l->next != NULL){
        LNode *p = l->next;
        LNode *min = (LNode*)malloc(sizeof (LNode));
        min->data = INT_MAX;
        while (p != NULL){
            if (p->data < min->data){
                min = p;
            }
            p = p->next;
        }
        std::cout<<min->data<<" ";
        if (min->next != NULL){
            LNode *n = min->next;
            min->data = n->data;
            min->next = n->next;
            free(n);
        }
        else{
            free(min);
        }
    }
}


// 10.将一个带头节点的单链表分成两个带头结点的单链表。其中一个储存奇数元素，另一个储存偶数元素
void separateLinkList(LinkList l, LinkList &a, LinkList &b){
    LNode *p=l->next, *ap=a, *bp=b;
    int count = 1;
    while (p != NULL){
        LNode *preInsert = (LNode*)malloc(sizeof (LNode));
        preInsert->data = p->data;
        preInsert->next = NULL;
        if (count%2 == 0){
            ap->next = preInsert;
            ap = ap->next;
        }
        else{
            bp->next = preInsert;
            bp = bp->next;
        }
        p = p->next;
        count++;
    }
}


// 11.将带头节点的单链表分成两个带头节点的单链表，a{1,2,3,...n},b{n,n-1,...1}
void separateLinkLink2(LinkList l, LinkList &a, LinkList &b){
    LNode *p=l->next, *ap=a, *bp=b;
    int count = 1;
    while (p != NULL){
        LNode *n = (LNode*)malloc(sizeof (LNode));
        n->data = p->data;
        n->next = NULL;
        if (count%2 == 0){
            n->next = bp->next;
            bp->next = n;
        }
        else{
            ap->next = n;
            ap = ap->next;
        }
        count++;
        p = p->next;
    }
}

// 12.一个递增的有序单链表，去除其中重复的节点
void deleteSameNodeInIncreaseLinkList(LinkList &l){
    LNode *p = l->next;
    while (p->next != NULL){
        if (p->data == p->next->data){
            LNode *n = p->next;
            p->next = n->next;
            free(n);
        }
        else{
            p = p->next;
        }
    }
}


// 13.有两个元素大小递增的链表，将其合并为一个递减的链表
void mergeTwoIncreaseListIntoOne(LinkList &l, LinkList a, LinkList b){
    LNode *ap=a->next, *bp=b->next;
    do{
        if (ap==NULL){
            LNode *n = bp;
            n->next = l->next;
            l->next = n;
            bp = bp->next;
        }
        else if(bp==NULL){
            LNode *n = ap;
            n->next = l->next;
            l->next = n;
            ap = ap->next;
        }
        else{
            LNode *n;
            if (ap->data > bp->data){
                n->data = bp->data;
                n->next = l->next;
                l->next = n;
                bp = bp->next;
            }
            else{
                n->data = ap->data;
                n->next = l->next;
                l->next = n;
                ap = ap->next;
            }
        }
    }while(ap==NULL && bp==NULL);
}


// 14.将两个递增链表中的公共元素提取出来形成新的链表（不破环原来链表
void createListWithPublicNodeInTwoList(LinkList a, LinkList b, LinkList &t){
    LNode *ap = a->next, *bp = b->next, *tp=t;
    while (true){
        if (ap == NULL || bp == NULL){
            break;
        }
        if (ap->data > bp->data){
            bp = bp->next;
        }else if(ap->data < bp->data){
            ap = ap->next;
        }else if (ap->data == bp->data){
            LNode *temp = (LNode*)malloc(sizeof (LNode));
            temp->data = ap->data;
            temp->next = NULL;
            tp->next = temp;
            tp = tp->next;
            ap = ap->next;
            bp = bp->next;
        }
    }
}



void test(){
    int n = 0;
    do{
        std::cout<<++n<<std::endl;
    }while(n<10);
}

