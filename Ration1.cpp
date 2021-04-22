/***********************************************************
* 
*     File Name:  Ration1.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Wed 18 Jul 2018 04:28:11 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

struct Rational1 {
    Rational1(int n = 0, int d = 1): num(n), den(d) {
        cout << __func__ << "(" << num << "/" << den << ")" << endl;
    }
    int num;
    int den;
};

struct Rational2 {
    explicit Rational2(int n = 0, int d = 1) : num(n), den(d) {
        cout << __func__ << "(" << num << "/" << den << ")" << endl;
    }
    int num;
    int den;
};

void Display1(Rational1 ra) {
    cout << "Numberator: " << ra.num << " Denominator: " << ra.den << endl;
}

void Display2(Rational2 ra) {
    cout << "Numberator: " << ra.num << " Denominator: " << ra.den << endl;
}

int main() {
    Rational1 r1_1 = 11;
    Rational1 r1_2(12);

    //Rational2 r2_1 = 21;
    Rational2 r2_1(22);

    Display1(1);
    //Display2(2);
    Display2(Rational2(2));

    return 0;
}

