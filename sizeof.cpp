/***********************************************************
* 
*     File Name:  sizeof.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Tue 17 Jul 2018 11:20:22 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

struct People {
public:
    int  hand;
    static People* all;
    void getHello() {
        cout << hello;
    }
private:
    int hello;
};

struct test {
public:
    int test_num;
    People pro;

    void print() {
        cout << pro.hello << endl;
    }

private:
};

int main() {
    People p;
    p.getHello();
    test ts;
    ts.print();

    cout << sizeof(p.hand) << endl;
    cout << sizeof(People::all) << endl;
    cout << sizeof(People::hand) << endl;
}
