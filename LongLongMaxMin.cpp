/***********************************************************
* 
*     File Name:  LongLongMaxMin.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 16 Jul 2018 05:43:06 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <cstdio>
#include <climits>
using namespace std;
int main() {
    long long ll_min = LLONG_MIN;
    long long ll_max = LLONG_MAX;
    unsigned long long ull_max = ULLONG_MAX;

    printf("min: %lld\n max:%lld\n ull_max:%llu\n", ll_min, ll_max, ull_max);
    return 0;
}
