#include <iostream>
#include "SeqQueue.h"
#include "SqStack.h"
#include "LinkStack.h"

using namespace std;
int main() {
    char data[50];
    cin>>data;
    cout<<data<<endl;
    LinkStack s;
    initLinkStackWithHeader(s);
    int length = strlen(data);
    bool isLackLeft = false;
    for (int i = 0; i < length; i++){
        char temp = data[i];
        if (temp == '('){
            pushLinkStack(s, 1);
        }
        else if (temp == ')'){
            LinkNode *n = (LinkNode*)malloc(sizeof(LinkNode));
            bool b = popLinkStack(s, n);
            if (!b){
                isLackLeft = true;
                cout<<"括号匹配错误：缺少'（'"<<endl;
                break;
            }
        }
        else{
            cout<<"error:illegal input"<<endl;
            break;
        }
    }
    if (!isLackLeft && !isEmpty(s)){
        cout<<"括号匹配错误：缺少'）'"<<endl;
    }
    else if(!isLackLeft && isEmpty(s)){
        cout<<"括号匹配成功！"<<endl;
    }
//    string in = "as";
    return 0;
}
