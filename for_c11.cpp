/***********************************************************
* 
*     File Name:  for_c11.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 06:00:04 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int & e: arr) {
        e *= 2;
    }
    return 0;
}
