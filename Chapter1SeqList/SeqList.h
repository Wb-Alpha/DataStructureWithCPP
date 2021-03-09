//
// Created by ChuhaoH on 2021-01-29.
//
#include "stdlib.h"
#include "cmath"
#include <clocale>
#define MaxSize 100
using namespace std;

typedef struct {
    int data[MaxSize];
    int length;
}SeqList;

// 初始化
void init(SeqList &l){
    l.length = 0;
}

// 打印
void showSeqList(SeqList l){
    for (int i = 0; i < l.length; i++){
        std::cout<<l.data[i]<<std::endl;
    }
}

// 插入操作
bool ListInsert(SeqList &l, int i, int e){
    if (i<1 || i>l.length+1){
        return false;
    }
    if (l.length >= MaxSize){
        return false;
    }
    for (int j = l.length; j >= i; i--){
        l.data[j] = l.data[j-1];
    }
    l.data[i-1] = e;
    l.length++;
    return true;
}


//删除操作
bool ListDelete(SeqList &l, int i, int &e){
    if (i<1 || i>l.length){
        return false;
    }
    e = l.data[i-1];
    for (int j=1; j<l.length; j++){
        l.data[j-1]=l.data[j];
    }
    l.length--;
    return true;
}

// 按值查找（顺序查找）
int LocateElem(SeqList l, int e){
    int i;
    for(i=0 ;i<l.length; i++){
        if (l.data[i] == e){
            return i+1;
        }
    }
    return 0;
}
// 1.删除最小值的元素并且返回被删除元素的值
int deleteMin(SeqList &l){
//    if (l.length == 0){
//        std::cout<<"顺序表为空"<<std::endl;
//        return INT_MAX;
//    }
    int index = 0;
    int min = INT_MAX;
    for (int i = 0; i < l.length; i++){
        if (l.data[i] < min){
            min = l.data[i];
            index = i;
        }
    }
    l.data[index] = l.data[l.length-1];
    return min;
}

// 2.逆置所有元素，空间复杂度要求为O(1)
void reverse(SeqList &l){
    if (l.length == 0){
        std::cout<<"错误"<<std::endl;
        return;
    }
    for (int i = 0; i < l.length/2; i++){
        int temp = l.data[i];
        l.data[i] = l.data[l.length-i-1];
        l.data[l.length-i-1] = temp;
    }
}

// 3.对于长度为n的顺序表L，设计一个时间复杂度为O(n)，空间复杂度为O(1)的算法，删除所有值为x的元素
void deleteElem(SeqList &l, int x){
    if (l.length == 0){
        std::cout<<"错误：长度为0"<<std::endl;
        return;
    }
    int index = 0;
    for (int i = 0; i < l.length; i++){
        if (l.data[i] != x){
            l.data[index] = l.data[i];
            index++;
        }
    }
    l.length = index+1;
}

// 4.从顺序表中删除值在s和t之间的所有元素
void deleteSelection(SeqList &l, int s, int t){
    cout<<"excul\n";
    if (s > t){
        std::cout<<"区间冲突：起始点大于终点"<<std::endl;
        return;
    }
    if (l.length == 0){
        std::cout<<"错误：顺序表为空"<<std::endl;
        return;
    }
    int index = 0;
    for (int i = 0; i < l.length; i++){
        if (l.data[i] <= s || l.data[i] >= t){
            l.data[index] = l.data[i];
            index++;
        }
    }
    l.length = index;
}
// 6.删除表中所有重复的值，使得表的值唯一
void deleteAllSame(SeqList &l){
    int i = 1;
    int size = 1;
    while ( i < l.length ){
        for (int j = 0; j < size; j++){
            if (l.data[j] == l.data[i]){
                break;
            }
            if (j == size-1){
                l.data[size] = l.data[i];
                size++;
            }
        }
        i++;
    }
    l.length = size;
}

// 7.把两个有序的顺序表合并为一个新的有序顺序表，并且返回对应顺序表
SeqList mergeTwoSeqList(SeqList a, SeqList b){
    SeqList l;
    l.length = a.length+b.length;
    int indexA = 0;
    int indexB = 0;
    for (int i = 0; i < l.length; i++){
        if (indexA == a.length){
            l.data[i] = b.data[indexB];
            indexB++;
        }
        else if (indexB == b.length){
            l.data[i] =a.data[indexA];
            indexA++;
        }
        else{
            if (a.data[indexA] < b.data[indexB]){
                l.data[i] = a.data[indexA];
                indexA++;
            }
            else{
                l.data[i] = b.data[indexB];
                indexB++;
            }
        }
    }
    return l;
}



