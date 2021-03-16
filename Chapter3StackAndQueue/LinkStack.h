//
// Created by h on 2021-02-23.
//

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}*LinkStack;

typedef struct CharLinkNode{
    char data;
    struct CharLinkNode *next
}*CharLinkStack;

bool initLinkStackWithHeader(LinkStack &l){
    l = (LinkNode *)malloc(sizeof (LinkNode));
    if (l == NULL)
        return false;
    l->next = NULL;
    return true;
}

void initLinkStackWithoutHeader(LinkStack &l){
    l = NULL;
}

bool popLinkStack(LinkStack &s, LinkNode *x){
    if (s->next == NULL){
        std::cout<<"error:empty stack, pop deny"<<std::endl;
        return false;
    }
    x = s->next;
    s->next = x->next;
    x->next = NULL;
    return true;
}

void pushLinkStack(LinkStack &s, int x){
    LinkNode *n = (LinkNode*)malloc(sizeof(LinkNode));
    n->data = x;
    n->next = s->next;
    s->next = n;
}


bool isEmpty(LinkStack s){
    if (s->next == NULL){
        return true;
    }
    else{
        return false;
    }
}