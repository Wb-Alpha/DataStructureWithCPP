//
// Created by h on 2021-02-23.
//

#define MaxSize 50
typedef struct {
    int data[MaxSize];
    int top;
}SqStack;


// 初始化栈
void initStack(SqStack &s){
    s.top = -1;
}

// 判断栈空
bool isStackEmpty(SqStack s){
    if (s.top == -1)
        return true;
    else
        return false;
}

bool push(SqStack &s, int x){
    if(s.top == MaxSize-1)
        return false;
    s.top = s.top+1;
    s.data[s.top] = x;
    return true;
}

bool pop(SqStack &s, int &x){
    if (s.top == -1){
        return false;
    }
    x = s.data[s.top];
    s.top = s.top-1;
    return true;
}

bool getTop(SqStack s, int &x){
    if (s.top == -1)
        return false;
    x = s.data[s.top];
    return true;
}