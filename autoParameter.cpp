/***********************************************************
* 
*     File Name:  AutoParameter.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 09:35:26 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

auto test_fun(int a) -> int {
    cout << a << endl;
    return 0;
}


int main() {
    auto a = 123;
    test_fun(a);
    return 0;
}

//eg.  auto传递参数的例子
int x; 
int* y = &x;

double foo();
int& bar();


auto* a = &x;               //√,  int *
auto& b = x;                //√,  int & 
auto  c = y;                //√,  int *
auto* d = y;                //√,  int *

auto* e = &foo();           //×,  指针不能指向临时变量
auto& f = foo();            //×,  nonconst的左值引用不能和一个临时变量绑定
auto  g = bar();            //√,  int 
auto& h = bar();            //√,  int&



