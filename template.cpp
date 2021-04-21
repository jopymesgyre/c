/***********************************************************
* 
*     File Name:  template.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Tue 17 Jul 2018 05:58:21 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

template <typename T> void TempFun(T a) {
    cout << a << endl;
}

int main() {
    TempFun(1);         //实例转化为TempFun<const int>(1);
    TempFun("1");       //实例转化为TempFum<const char *) ("1")
    return 0;
}


