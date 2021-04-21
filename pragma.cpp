/***********************************************************
* 
*     File Name:  pragma.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 16 Jul 2018 05:15:51 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>

#pragma once;       //该头文件应该只被编译一次
//或者用 _Pragma("once");

/*
 * #pramga once;    等价于
 *
 * #ifndef THIS_HEADER
 * #define THIS_HEADER
 * //头文件信息
 * #endif
 *
 */

using namesapce std;

int main() {
    return 0;
}

