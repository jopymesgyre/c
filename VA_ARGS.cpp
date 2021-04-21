/***********************************************************
* 
*     File Name:  VA_ARGS.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 16 Jul 2018 05:22:23 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>

#define LOG(...) { \
    fprintf(stderr, "%s:line %d:\n", __FILE__, __LINE__); \
    printf("\n%s\n", __VA_ARGS__); \
    fprintf(stderr, __VA_ARGS__); \
    fprintf(stderr, "\n"); \
}

using namespace std;

int main(int argc, char** args) {
    
    int x = 3;
    LOG("x = %d", x);
    return 0;
}
