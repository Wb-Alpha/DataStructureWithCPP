//
// Created by 黄楚浩 on 2021/3/16.
//
// 定长顺序存储
#define MaxSize 255
typedef struct {
    char ch[MaxSize];
    int length;
}SeqString;


// 堆分配存储
typedef struct {
    char *ch;
    int length;
}HString;

// 初始化操作
void initSeqString(SeqString &s){
    s.length = 1;
}

// 赋值操作
void StrAssign(SeqString &t, char data[], int size){
    for (int i = 0; i < size; i++){
        t.ch[i+1] = data[i];
        t.length++;
    }
}

// 将字符串复制到另一字符串
bool copyStr(SeqString s, SeqString &t){
    for (int i = 1; i < s.length; i++){
        t.ch[i] = s.ch[i];
    }
    if (t.length-s.length>0){
        for (int i = s.length; i < t.length; i++){
            t.ch[i] = 0;
        }
    }
    t.length = s.length;
    return true;
}

// 判空操作
bool strEmpty(SeqString s){
    if (s.length = 1){
        return true;
    }
    else {
        return false;
    }
}

// 求子串
bool SubString(SeqString &sub, SeqString s, int pos, int len){
    if (pos+len-1 > s.length){
        return false;
    }
    for (int i = pos; i < pos+len; i++){
        sub.ch[i-pos+1] = s.ch[i];
    }
    sub.length = len;
    return true;
}

// 比较操作。若S>T，则返回值>0;若S=T，则返回值=0；若S<T，则返回值<0
int StrCompare(SeqString s, SeqString t){
    for (int i = 1; i <= s.length && i <= t.length; i++){
        if (s.ch[i] != t.ch[i])
            return s.ch[i]-t.ch[i];
    }
    return s.length-t.length;
}

// 定位操作，如果主串s中存在和串t值相同的淄川，则返回它在主串s中第一次出现的位置
int index(SeqString s, SeqString t){
    int i, n = s.length, m=t.length;
    SeqString sub;
    while(i <= n-m+1){
        SubString(sub, s,i,m);
        if (StrCompare(sub, t) != 0) ++i;
        else return i;
    }
    return 0;
}

// 朴素模式匹配算法
int index1(SeqString s, SeqString t){
    int k = 1;
    int i = k, j = 1;
    while (i <= s.length && j <= t.length){
        if (s.ch[i] == t.ch[j]){
            ++i;
            ++j;
        }
        else{
            k++;
            i=k;
            j=1;
        }
    }
    if (j > t.length)
        return k;
    else
        return 0;
}


// KMP算法
int index_KMP(SeqString s, SeqString t, int next[]){
    int i=1, j=1;
    while (i <= s.length && j <= t.length){
        if (j==0 || s.ch[i]==t.ch[j]){
            ++i;
            ++j;
        }
        else
            j = next[j];
    }
    if (j > t.length)
        return i-t.length;
    else
        return 0;
}


// 计算next数组
void get_next(SeqString t, int next[]){
    int i=1, j=0;
    next[1]=0;
    while (i < t.length){
        if (j==0 || t.ch[i]==t.ch[j]){
            ++i;++j;
            next[i]=j;
        }
        else{
            j=next[j];
        }
    }

}