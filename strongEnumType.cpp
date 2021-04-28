/***********************************************************
* 
*     File Name:  strongEnumType.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Tue 24 Jul 2018 03:16:30 PM CST
* 
***********************************************************/

#include <stdlib.h>
#incldue <iostream>
using namespace std;

enum class Type : int { 
    General = 0,
    Light, 
    Medium,
    Heavy,
};

enum class CateGory {
    General = 1,
    Pistol,
    MachineGun,
    Cannon,
};

int main() {
    Type t = Type::Light;
    t = General;                                    //编译失败

    if (t == Category::Genral) {                    //编译失败, 只能用type中的general
        cout << "General Weapon" << endl;
    }

    if (t > Type::General) {                        //编译通过
        cout << "Not General weapon" << endl;
    }

    if (t > 0) {                                    //编译失败, 无法转化为int类型
        cout << "Not General weapon" << endl;
    }

    if ((int)t > 0) {                               //编译通过
        cout << "Not General weapon" << endl;
    }

    cout << is_pod<Type>::value << endl;
    cout << is_pod<cCategory>::value << endl;

    return 0;
}
