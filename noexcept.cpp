/***********************************************************
* 
*     File Name:  noexcept.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 16 Jul 2018 07:07:36 PM CST
* 
***********************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

void Throw() {
    throw 1;
}

void NoBlockThrow() {
    Throw();
}

void BlockThrow() noexcept {
    Throw();
}

int main() {
    try {
        Throw();
    } catch (...) {
        cout << "Found throw." << endl;
    }

    try {
        NoBlockThrow();
    } catch (...) {
        cout << "Throw is not blocked." << endl;
    }

    try {
        BlockThrow();
    } catch (...) {
        cout << "Found throw 1." << endl;
    }

    return 0;
}
