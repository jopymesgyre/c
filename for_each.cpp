/***********************************************************
* 
*     File Name:  for_each.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 05:44:42 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <algorithm>
#include <iostream> 
using namespace std;

int action1(int& e) {
    e *= 2;
}
int action2(int& e) {
    cout << e << '\t';
}

int main() {
    int arr[5] = {1,2,3,4,5};   
    for_each(arr, arr + sizeof(arr) + sizeof(arr)/sizeof(arr[0]), action1);
    for_each(arr, arr + sizeof(arr) + sizeof(arr)/sizeof(arr[0]), action2);
    return 0;
}
