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
//    srand((int)time(0));
//    for (int i = 0; i < 10; i++)
//    {
//        std::cout << rand()%100<< " ";
//    }
    LinkList l;
    createListWithTailInsert(l, 10,1000);
    showLinkList(l);
    std::cout<<"\n";
    LinkList a,b;
    initListWithHeader(a);
    initListWithHeader(b);
    separateLinkLink2(l,a,b);
    showLinkList(a);
    std:cout<<"\n";
    showLinkList(b);
//    deleteNodeInRange(l, 100, 300);
//    sortLinkListIncremental(l);
//    showLinkList(l);
//    deleteMin(l);
//    showLinkList(reverseLinkListOnTheSpot(l));
//    reverseOutputLinkList(l);
//    deleteAllXInLinkListWithRecursion1(l, 5);
//    deleteAllXInLinkList(l, 5);
//    showLinkList(l);

//    deleteTheSameAbsValuesNode(l, 10);
//    splitLinkList(l);
//    sortLinkList(l);
//    showLinkList(l);
//    deleteAllXinList1(l,2);
//    deleteAllXinList2(l, 3);
//    reverseLinkList(l);
//    showLinkList(l);
    return 0;
}
