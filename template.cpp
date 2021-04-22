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

//==================================================================

void DefParm(int m = 3) {}          
//C++98编译通过, C++11编译通过

template <typename T = int> class DefClass {};
//C++98编译通过, C++11编译通过

template <typename T = int> void DefTempParm() {};
//C++98编译失败, C++11编译通过
// >> 在语法上与类模板有些不同的是, 在为多个默认参数声明指定默认值的时候, 程序员必须遵照
// >> "从右往左"的规则进行指定, 而这个条件对函数末班来说并不是必须的, 如下:

//==================================================================

template <typename T1, typename T2 = int> class Defclass1;
//template <typename T1 = int, typename T2> class Defclass2;    //无法通过编译

template <typename T, int i = 0> class Defclass3;
template <int i = 0, typename T> class Defclass4;               //无法通过编译

template <typename T1 = int, typename T2> void DefFunc1(T1 a, T2 b);   
template <int i = 0; typename T> void DefFunc2(T a);
    
//==================================================================
int main() {
    TempFun(1);         //实例转化为TempFun<const int>(1);
    TempFun("1");       //实例转化为TempFum<const char *) ("1")
    return 0;
}
