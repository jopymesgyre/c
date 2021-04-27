/***********************************************************
* 
*     File Name:  autoError.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 11:01:55 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <vector>

void fun(auto x = 1) {}
struct str {
    auto var = 10;
};

int main() {
    char x[3];
    auto y = x;
    auto z[3] = x;      //3: auto数组, 无法通过编译
    // 4: auto 模板参数
    vector<auto> v = {1};
}
