/*  
 *  Description : 构造函数再探
 *  Created by 旋风冲锋龙卷风 on 2023/01/06 16:00
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

class ConstRef
{
public:
    // ConstRef(int i1)
    // {
    //     i = i1;
    //     ci = i1;//错误, 不能给const 赋值
    //     ri = i; //错误,ri没被初始化
    // }

    ConstRef(int i1) : i(i1), ci(i1), ri(i) {}

private:
    int i;
    const int ci;
    int &ri;
};

class X
{
    int i;
    int j;
public:

    X(int val) : j(val), i(j) {} //未定义的: i会在j之前被初始化

};

class Y
{
    int i;
public:
    Y(int i = 1) : i(i) {}//相当于提供了两个构造函数
};

void test01()
{
    Y y{};
}

class Z
{
private:
    int i;
    int j;
    int k;
public:
    Z(int i, int j, int k) : i(i), j(j), k(k)
    {}
    Z() : Z(1, 2, 3) {}//全部委托
    Z(int i) : Z(i, 2, 3) {}
};

int main()
{

    return EXIT_SUCCESS;
}