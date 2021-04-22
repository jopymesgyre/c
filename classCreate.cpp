/***********************************************************
* 
*     File Name:  classCreate.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 09:47:40 AM CST
* 
***********************************************************/
#include <iostream>
#include <stdlib.h>

using namespace std;

#if 0
//一个构造函数的派生
struct A {
    A (int i) { }
};

struct B : public A {
    B (int i) : A(i), d(i) { }
    int d;
};
#endif

//多个构造函数的派生
struct A {
    A (int i) { 

    }

    A (double d, int i) {

    }
    
    A (float f, int i, const char* c) {

    }
};

struct B {
    B (int i) : A (i) {

    }

    B (double d, int i) : A (d, i){

    }

    B (float f, int i, const char* c) : A (f, i, c) {

    }

    //...

    virtual void ExtraInterface() {

    }
};


