//
// Created by h on 2021-02-23.
//

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}*LinkStack;

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