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

struct Object {
    virtual void fun() = 0;
};

//-----------------------------------------
struct Base : public Object {
    void fun() final;               //声明final不可写
    virtual void Turing() = 0;
    virtual void Dijkstra() = 0;
    virtual void VNeumann(int g) = 0;
    virtual void DKnuth() const;
    void Print();
};

struct DerivedMid : public Base {
    //void VNeumann(double g);
    //接口被隔离, 曾多想一个版本的VNeumann函数
};

struct DerivedTop : public DerivedMid {
    void Turing() override;             //可以通过编译
    //void Dijkstra() override;           //拼写错误, 无法通过编译
    //void VNeumann(double g) override;   //参数不一样, 无法通过编译
    //void DKnuth()  override;            //常量性不同, 无法通过编译
    void DKnuth()  const override;      //正确函数, 可以通过编译
    //void Print() override;              //非虚函数重载, 无法通过编译
};

struct Derived : public Base {
    //void fun();                         //无法通过编译
};


int main() {
    return 0;
}
