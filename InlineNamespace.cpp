/***********************************************************
* 
*     File Name:  InlineNamespace.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Fri 20 Jul 2018 10:27:21 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

//久的标准写法
#if 0
namespace Jim {
    namespace Basic {
        struct Knife {
            Knife() { cout << "Knife in Basic." << endl; }
        };

        class CorkScrew{ };
    }

    namespace Toolkit {
        template<typename T> class SwissArmyKnife{};
    }

    namespace Other {
        Knife b;
        struct Knife { Knife() { cout << "Knife in other" << endl; } };
        Knife c;
        Basic::Knife k;
    }
}

using namespace Jim;
int main() {
    Toolkit::SwissArmyKnife <Basic::Knife> sknife;
}
#endif

//C11引入的新特性 --- 内联命名空间
namespace Jim {
    inline namespace Basic {
        struct Knife {
            Knife() { cout << "Knife in Basic." << endl; }
        };

        class CorkScrew{ };
    }

    inline namespace Toolkit {
        template<typename T> class SwissArmyKnife{};
    }

    namespace Other {
        Knife b;
        struct Knife { Knife() { cout << "Knife in other" << endl; } };
        Knife c;
        Basic::Knife k;
    }
}

namespace Jim {
    templete<> class SwissArmyKnife<Knife> { };
}

using namespace Jim;
int main() {
    SwissArmyKnife<Knife> sknife;
    return 0;
}
