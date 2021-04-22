/***********************************************************
* 
*     File Name:  rvalueReference.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 11:58:57 AM CST
* 
***********************************************************/

//右值引用
//移动语义和完美转发
#include <stdlib.h>
#include <iostream>
using namespace std;
class HasPtrMem {
public:
    HasPtrMem() : d(new int(0)) {

    }

    //拷贝构造函数将在堆中分配内存, 并用 *h.d初始化
    HasPtrMem(const HasPtrMem & h) : d(new int(*h.d)) {

    }

    ~HasPtrMem() {
        delete d;
    }

    int *d;
};

int main() {
    HasPtrMem a;
    HasPtrMem b(a);
    cout << *a.d << endl;
    cout << *b.d << endl;
    
    return 0;
}
