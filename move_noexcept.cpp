/***********************************************************
* 
*     File Name:  move_noexcept.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 03:48:27 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>

using namespace std;
struct Maythrow {
    Maythrow() {

    }

    Maythrow(const Maythrow&) {
        cout << "Maythrow copy constructor." << endl;
    }
    Maythrow(Maythrow&&) {
        cout << "Maythrow move constructor." << endl;
    }
};
struct Nothrow {
    Nothrow() {

    }

    Nothrow(Nothrow &&) noexcept {
        cout << "Nothrow move constructor." << endl;
    }

    Nothrow(const Nothrow&) {
        cout << "Nothrow move constructor." << endl;
    }
};

int main() {
    Maythrow m;
    Nothrow n;

    Maythrow mt = move_if_noexcept(m);
    Nothrow nt = move_if_noexcept(n);

    return 0;
}

