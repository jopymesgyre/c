/***********************************************************
* 
*     File Name:  RightPare.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Fri 20 Jul 2018 03:16:14 PM CST
* 
***********************************************************/

#include <stdlib.h>

//C++99的标准
template <int i> class X {};
template <ckass T> ckass T {};

Y<X<1> > x1;  //编译成功
Y<X<2>> x2;   //编译失败, 因为编译器会将>>优先解析为右移符号

//g++ -c RightPare.cpp

//在使用形如 statuc_cast/dynamic_cast/reinterpret_cast/const_cast表达式进行转换的时候, 也常常遇到相同的情况

const vector<int> v = static_cast<vector<int>>(v);       //无法通过编译

//在C++11标准中, 会要求编译器智能的判断在那些情况下 << 不是右移符号



