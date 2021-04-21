/***********************************************************
* 
*     File Name:  func.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 16 Jul 2018 04:36:11 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>

using namespace std;

const char* hello() {
    return __func__;
}

const char* world() {
    return __func__;
}

struct TestStruct {
    TestStruct() : name(__func__) { }

    const char* name;
};

class TestClass {
public:
    const char* name;
    void* getName() {
        cout << __func__ << endl;
    }
    
    TestClass() : name(__func__) {
    }
};

int main() {
    cout << "Hello:" << hello() << ", world:" << world() << endl;

    TestStruct teststruct;
    cout << "TestStruct:" << teststruct.name << endl;

    TestClass tc;
    cout << tc.name << endl;
    tc.getName();

    return 0;
}
