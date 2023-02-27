/*  
 *  Description : 
 *  Created by 旋风冲锋龙卷风 on 2023/01/06 01:51
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

class A
{
public:
    void some_member() const;

private:
    mutable size_t access_ctr; //在const对象内也能修改
};

void A::some_member() const
{
    ++access_ctr;
}

class Screen
{
public:
    //根据对象是否是const重载了display函数
    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }

    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(ostream &os) const
    {
        os<< "Test" << endl;
    }
};

class Y;

class X
{
public:
    void visit();
private:
    Y *p;
};

class Y
{
public:
    friend void X::visit();
private:
    X x;
};

void X::visit()
{
    cout << sizeof(p->x) <<endl;
}

void test01()
{
    const A a{};
    a.some_member();
}

struct Z
{
    friend void  f()
    {
    //    友元函数可以定义在类的内部
    }
    // Z() { f(); } //错误, f还没有被声明
    void g();
    void h();
};
void Z::g()
{
    // return f(); //错误f还没有被声明
}

void f(); //声明f
void Z::h()
{
    return f(); //正确,现在f的声明在作用域中
}

int main()
{

    return EXIT_SUCCESS;
}