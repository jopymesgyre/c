/***********************************************************
* 
*     File Name:  utility_move.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 03:24:52 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

class HugeMem {
public:
    HugeMem(int size) : sz (size > 0 ? size : 1) {
        c = new int[sz];
    }

    ~HugeMem() {
        delete[] c;
    }

    HugeMem(HugeMem && hm) : sz(hm.sz), c(hm.c) {
        hm.c = nullptr;
    }

    int* c;
    int sz;
};

class Moveable {
public:
    Moveable() : i(new int(3)), h(1024) { }

    ~Moveable() { 
        delete i; 
    }

    Moveable(Moveable&& m) : i(m.i), h(move(m.h)) { 
        m.i = nullptr;
    }

    int* i;
    HugeMem h;
};

Moveable GetTemp() {
    Moveable tmp = Moveable();
    cout << hex << "Hug Mem from " << __func__
        << " @" << tmp.h.c << endl;
    return tmp;
}

int main() {
    Moveable a(GetTemp());
    cout << hex << "Hug Mem from " << __func__ 
        << " @" << a.h.c << endl;

    return 0;
}
