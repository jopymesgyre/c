/***********************************************************
* 
*     File Name:  decltypeResult_t.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 03:32:19 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <type_traits>

using namespace std;
typedef double(*func) ();

int main() {
    result_of<func()>::type f;
    return 0;
}
