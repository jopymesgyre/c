/***********************************************************
* 
*     File Name:  Delegate.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 11:35:24 AM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

//冗余代码
#if 0
class Info {
public:
    Info() : type(1), name('a') {
        InitRest();
    }

    Info(int i) : type(i), name('a') {
        InitRest();
    }

    Info(char e) : type(1), name(e) {
        InitRest();
    }
private:
    void InitRest() {
        //其他的初始化
    }

    int type;
    char name;
};
#endif

//优化代码
#if 0
class Info {
public:
    Info() { InitReset(); }
    Info(int i) { InitReset();}
    Info(char e) { InitReset();}
private:
    void InitReset() {
        //其他的初始化
    };
    int type {1};
    int name {'a'}
    //...
    
    return 0;
};
#endif

//C11标准下的委托构造函数
class Info {
public:
    Info() {
        InitReset();
    }

    Info(int i) : Info() {
        type = i;
    }
    
    Info(char e) : Info() {
        name = e;
    }

private:
    void InitReset() {
        //其他初始化
    };
    int type {1};
    char name {'a'};
};
int main() {
    return 0;
}
