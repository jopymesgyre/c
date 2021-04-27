/***********************************************************
* 
*     File Name:  decltype.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 12:22:21 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

int main () {
    vector<int> vec;
    typedef decltype(vec.begin()) vectype;

    for (vectype i = vec.begin(); i < vec.end(); ++i) {
        //do something
    }
    for (decltype(vec)::iterator i = vec.begin(); i < vec.end(); ++i) {
        //do something
    }

    return 0;
}

//一些有趣的用法

using size_t =  decltype(sizeof(0));
using ptrdiff_t = decltype((int*)0 = (int*)0);
using nullptr_t = decltype(nullptr);

