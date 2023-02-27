/*  
 *  Description : decltype的使用
 *  Created by 旋风冲锋龙卷风 on 2022/11/27 21:23
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

int f()
{
    return 0;
}

void test01()
{
    decltype(f()) sum = 2;//sum的类型就是f函数的返回值,编译器不会调用f,只是
}

void test02()
{
    int a;
    decltype(a)  x;
    int i = 42, *p = &i, &r = i;
    int &j = i;
    decltype(r) y = i; // y是int&
    decltype(r + 1) b;//b是int类型
    decltype(*p) z = i; //z是引用类型,必须初始化
    decltype((i)) z1 = i;// 由于加了(),z1也是引用类型,必须初始化

}

void test03()
{
    int a = 3, b = 4;
    decltype(a) c = a;//c是int类型,c不会绑定到a,c与a是两块内存
    decltype((b)) d = a;//d是int &, d会绑定a
    cout << ++c <<endl; //4
    cout << ++d <<endl;//4
}

void test04()
{
    int a = 3, b = 4;
    decltype(a) c;//int,其实可以不初始化
    decltype(a = b) d = a; //int&,必须初始化
}

int main()
{
    test03();
    return EXIT_SUCCESS;
}