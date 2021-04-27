/***********************************************************
* 
*     File Name:  typeid.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Mon 23 Jul 2018 11:50:52 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
#include <typeinfo>
using namespace std;

class White1{};
class Black{};

int main() {
    White1 a;
    Black b;

    cout << typeid(a).name() << endl;       //5White
    cout << typeid(b).name() << endl;       //5Black

    White1 c;
    bool a_b_sametype = (typeid(a).hash_code() == typeid(b).hash_code());
    bool a_c_sametype = (typeid(a).hash_code() == typeid(c).hash_code());
    
    cout << "Same type? " << endl;
    cout << "A and B? " << (int)a_b_sametype << endl;
    cout << "A and C? " << (int)a_c_sametype << endl;

    return 0;
}
