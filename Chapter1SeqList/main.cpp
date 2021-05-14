#include <iostream>
#include "cstdlib"
#include <ctime>
#include "SeqList.h"
#include "LinkList.h"

//int main() {
//    SeqList l;
//    init(l);
//    ListInsert(l, 1, 32);
//    ListInsert(l, 2, 85);
//    ListInsert(l, 3, 32);
//    ListInsert(l, 4, 75);
//    ListInsert(l, 5, 75);
//    ListInsert(l, 6, 67);
//    ListInsert(l, 7, 91);
//
//    SeqList a;
//    init(a);
//    ListInsert(a,1,45);
//    ListInsert(a,2,98);
//
//    SeqList b;
//    init(b);
//    ListInsert(b, 1, 56);
//    ListInsert(b, 2, 72);
//    ListInsert(b, 3, 88);
//    //删除最小值
////    int min = deleteMin(l);
////    show(l);
////    printf("..........................\n");
////    std::cout<<min<<std::endl;
//    //逆置
////    reverse(l);
////    show(l);
//    //删除指定值的元素
////    deleteElem(l, 75);
////    show(l);
////  删除位于区间s到t的所有值
//    // Magic +1s
////    show(l);
////    output(l, 40, 70);
////    std::cout<<"hello world"<<std::endl;
////    std::cout<<"hello world";
////    deleteSelection(l, 40, 70);
////    deleteAllSame(l);
////    show(l);
//
//    SeqList n = mergeTwoSeqList(a, b);
//    std::cout<<a.length<<std::endl;
//    show(n);
//    return 0;
//}

int main()
{
    LinkList l,a,b;
    initListWithHeader(l);
    initListWithHeader(a);
    initListWithHeader(b);
    int list_a[] = {12,23,72,86,97,375,735,828};
    int list_b[] = {23,53,57,86,154,375,678,792};
    createListWithTuple(a, list_a);
    createListWithTuple(b, list_b);
    showLinkList(a);
    std::cout<<"\n";
    showLinkList(b);
    std::cout<<"\n";
//    test();
//    mergeTwoIncreaseListIntoOne(l,a,b);
    createListWithPublicNodeInTwoList(a,b,l);
    showLinkList(l);
    return 0;
}
