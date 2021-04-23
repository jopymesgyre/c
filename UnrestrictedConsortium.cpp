/***********************************************************
* 
*     File Name:  UnrestrictedConsortium.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Thu 19 Jul 2018 10:30:27 AM CST
* 
***********************************************************/

#include <stdlib.h>
struct Student {
    Student(bool g, int a) : gender(g), age(a) {

    }

    bool gender;
    int age;
};

union T {
    Student s;
    int id;
    char name[10];
};
