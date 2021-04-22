/***********************************************************
* 
*     File Name:  clessUsingCtreat.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 10:05:27 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

struct Base {
    void f(double i) {
        cout << "Base: " << i << endl;
    }
};

struct Derived : Base {
    using Base::f;
    void f(int i) {
        cout << "Derived: " << i << endl;
    }
};

int main() {
    Base b;
    b.f(4.5); 
    Derived d;
    d.f(4.5);

    return 0;
}
