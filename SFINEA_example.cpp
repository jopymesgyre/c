/***********************************************************
* 
*     File Name:  SFINEA_example.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Fri 20 Jul 2018 02:33:12 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

struct Test {
    typedef int foo;
};

template <typename T>
void f(typename T::foo) { }

template <typename T>
void f(T) { }   

int main() {
    f<Test>(10);
    f <int>(10);

    return 0;
}
