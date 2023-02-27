/*  
 *  Description : 用来演示不同的强制类型转换
 *  Created by 旋风冲锋龙卷风 on 2022/12/03 20:41
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//const_cast
void test01()
{
    const int a = 24;
    const int* p = &a;

    //同时const_cast只能修改对象的底层const, 修改其他的是错误的
    int *m = const_cast<int*>(p);
    //通过 *m修改是未定义的行为
    *m = 12;

    //出现了很神奇的事情:
    //这三个地址相同, 但是结果不同 p和m是指针,指向的区域的值为12, 但是a是24

    cout << "*m = " << *m << ", *m的地址: " << m << endl;
    cout << "a = " << a << ", a的地址: " << &a << endl;
    cout << "*p = " << *p << ", p = " << p << endl;

    //static_const不能修改底层const
    // const char*p2 = static_cast<const char*>(p); //错误
}

void test02()
{
    int *ip;
    char *pc = reinterpret_cast<char*>(ip);
    string s(pc); //错误,pc所指的真实对象是一个int而非char
}
int main()
{
    test02();
    return EXIT_SUCCESS;
}