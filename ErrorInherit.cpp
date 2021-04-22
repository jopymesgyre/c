/***********************************************************
* 
*     File Name:  ErrorInherit.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 10:32:58 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

struct A {
    A (int a = 3, double = 2.4) {

    }
};

struct B :A {
    using A::A;
};
