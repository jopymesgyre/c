/***********************************************************
* 
*     File Name:  final_override.cpp
* 
*        Author:  Algolc
* 
*          mail:  17360224@qq.com
* 
*  Created Time:  Tue 17 Jul 2018 05:07:49 PM CST
* 
***********************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

class MathObject {
public:
    virtual double Arith() = 0;
    virtual void Pirnt() = 0;
};

class Printable : public MathObject {
public:
    double Arith() = 0;
    void Print() {
        cout << "OutPut is: " << Arith() << endl;
    }
};
  
class Add2 : public Printable {
public:
    Add2(double a, double b) : x(a), y(b) { }
    double Arith() {
        return x + y;
    }   
private:
    double x, y;
};

class Mu13 : public Printable {
public:
    Mu13(double a, double b, double c) : x(a), y(b), z(c) { }
    double Arith() { return x * y * z; }
private:
    double x, y, z;
};

int main() {
    return 0;
}
