
#include <vector>
#include "wchar.h"

#define MAXSIZE 50
using namespace std;
typedef struct Stack{
    char data[MAXSIZE];
    int top;
};

void init(Stack stack){
    stack.top=-1;
}

void push(Stack stack, char c){
    stack.top++;
    stack.data[stack.top] = c;
}

void pop(Stack stack, char c){
    stack.data[stack.top] = ' ';
    stack.top--;
}

char getTop(Stack stack){
    return stack.data[stack.top];
}

vector<int> FindNewspaper(int nSheetCount, int nPage) {
    // write code here
    vector<int> result = {0,0,0,0};
    if (nPage<=nSheetCount*2){
        if (nPage%2==0){
            result[0] = nPage/2;
            result[1] = nPage-1;
        }else{
            result[0] = nPage/2+1;
            result[1] = nPage+1;
        }
        result[3] = nSheetCount*4-result[0]*2+1;
        result[4] = nSheetCount*4-result[0]*2+2;
    }else{
        if (nPage%2==0){
            result[0] = nSheetCount*2-nPage/2+1;
            result[1] = nPage-1;
        }else{
            result[0] = nSheetCount*2-nPage/2;
            result[1] = nPage+1;
        }
        result[3] = result[0]*2-1;
        result[4] = result[0]*2;
    }
    return result;
}

using namespace std;
int main() {
    FindNewspaper(4,6);
    return 0;
}
