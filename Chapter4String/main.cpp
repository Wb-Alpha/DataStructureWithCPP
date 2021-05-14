#include <iostream>
#include "SeqString.h"

int main() {
    char data[] = {'a','b','a','a','b','c','a','b','c'};
    char dataB[] = {'a','c','a','a','b','b','a'};
    char data3[] = {'a'};
    SeqString s1;
    SeqString s2;
    SeqString s3;
    initSeqString(s1);
    initSeqString(s2);

    StrAssign(s1,data, sizeof (data)/sizeof (data[0]));
    StrAssign(s2,dataB, sizeof (dataB)/ sizeof (dataB[0]));
//    StrAssign(s3,data3,1);

    copyStr(s1, s2);
    for (int i=0; i<s2.length; i++){
        std::cout<<s2.ch[i]<<std::endl;
    }
    return 0;
}
