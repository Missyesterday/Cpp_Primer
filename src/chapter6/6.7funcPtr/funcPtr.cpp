/*  
 *  Description : 函数指针
 *  Created by 旋风冲锋龙卷风 on 2022/12/29 22:33
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;
bool lengthCompare(const string&, const string&);
//第三个形参是函数类型, 它会自动转换成指向函数的指针
void useBigger(const string &s1, const string &s2, bool pf(const string &, const string&));

//等价声明: 显式将形参定义为指向函数的指针
void useBigger(const string &s1, const string &s2, bool (*pf)(const string&, const string&));

//可以直接把函数作为实参使用, 它会自动转换成指针
void test()
{
    useBigger("hello", "goodbye", lengthCompare);
}

void test02()
{
    //Func和Func2是等价的类型,都是函数类型
    typedef bool Func(const string &, const string &);
    typedef decltype(lengthCompare) Func2;


    //FuncP和FuncP2是指向函数的指针
    typedef bool (*FuncP)(const string&, const string&);
    typedef decltype(lengthCompare) *FuncP2;//等价类型

    //需要注意的是,decltype关键字并不会返回指针类型, 需要在结果前加上*

    //useBigger的等价声明,下面两条语句是一样的
    //第一条语句中编译器会自动将Func转换成指针
    void useBigger(const string&, const string&, Func);
    void useBigger(const string&, const string&, FuncP2);

}

int main()
{

    return EXIT_SUCCESS;
}