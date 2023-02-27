/*  
 *  Description : 
 *  Created by 旋风冲锋龙卷风 on 2022/11/19 01:08
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    //可以在同一条定义语句中,用先定义的变量去初始化后定义的变量
    double price = 109.99, discount = price * 0.16;
    cout << discount << endl;

    //C++有很多初始化形式
    //下面这几种都可以
    //{}花括号是C++11的新标准, 用{}初始化变量得到全面应用, 称为列表初始化
    int a = 0;
    int b = {0};
    int c{0};
    int d(0);
}

//当使用{}初始化内置类型的时候,如果我们使用列表初始化且初始值有丢失信息的风险时,编译器会报错
void test02()
{

    long double ld = 3.1415926535;
    //存在丢失信息风险,报错
    //int a{ld}, b = {ld};
    //不报错
    int c = ld, d(ld);
}

//默认初始化
void test03()
{
    //初始化和赋值是两个概念
    //初始化在C++中是一个很复杂的问题
    
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}