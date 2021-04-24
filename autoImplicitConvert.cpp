/***********************************************************
* 
*     File Name:  autoImplicitConvert.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Fri 20 Jul 2018 04:27:03 PM CST
* 
***********************************************************/

#include <stdlib.h>
class PI {
public:
    double operator* (float v) {
        return (double)val * v;
    }
    const float val = 3.14592653;
};

int main() {
    float radius = 1.7e10;
    PI pi;
    auto circumference = 2 * (pi * radius);
    return 0
}
