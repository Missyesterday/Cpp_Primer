/*  
 *  Description : const的引用, 简称为"常量引用"
 *  Created by 旋风冲锋龙卷风 on 2022/11/26 23:28
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//常量引用可以被初始化为任意表达式
void test01()
{
    int i = 42;
    const int &r1 = i;
    i = 45;
    //r1 = 3;//但是r1不能修改
    //输出修改后的45
    cout << r1 << endl;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    //int &r4 = 3;//报错,非常量引用不能绑定到字面值
    int &r5 = i;
    int &r6 = r5;
    //int &r7 = r5 *2;//错误,非常量引用r7不能绑定到字面值和表达式
}

//常量引用可以绑定到另外一种类型
void test02()
{
    double dval = 3.14;
    const int &ri = dval;
    //输出3
    cout << ri << endl;
    //修改dval并不会改变ri的值
    //因为ri绑定的已经不是dval
    dval  = 4;
    cout << ri << endl;
}

void test03()
{
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    r1 = 0;
    //r2也被修改,因为r2是i的别名(引用)
    cout << r2 << endl;
}

int main()
{
    test03();
    return EXIT_SUCCESS;
}