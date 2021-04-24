/***********************************************************
* 
*     File Name:  TemplateAlias.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Fri 20 Jul 2018 02:24:04 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
#include <type_traits>
using namespace std;

using uint = unsigned int;
typedef unsigned int UINT;
using sint = int;

int main() {
    cout << is_same<uint, UINT>::value << endl; // 1
    return 0;
}
