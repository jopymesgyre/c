/***********************************************************
* 
*     File Name:  lvalueReference.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 02:41:28 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream> 
using namespace std;

struct Copyable {
    Copyable() {

    }

    Copyable(const Copyable &o) {
        cout << "Copied" << endl;
    }
};

Copyable ReturnRvalue() {
    return Copyable();
}

void AcceptVal(Copyable) {
    
}

void AcceptRef(const Copyable &)  {

}

int main() {
    cout << "Pass By Value:" << endl;
    AcceptVal(ReturnRvalue());
    cout << "Pass By Reference:" << endl;
    AcceptRef(ReturnRvalue());

    return 0;
}
