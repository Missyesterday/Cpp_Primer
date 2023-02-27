/*  
 *  Description : 测试函数匹配
 *  Created by 旋风冲锋龙卷风 on 2022/12/10 19:34
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <ext/slist>
#include <ext/hash_map>
using namespace std;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);


void test01()
{
    //错误，此时编译器因为这个调用具有二义性而报错
    // f(42, 2.25);

    //正确，调用f(double , double = 3.14)
    f(5.3);
}

int main()
{

    return EXIT_SUCCESS;
}