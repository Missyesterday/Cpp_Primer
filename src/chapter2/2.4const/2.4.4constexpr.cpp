/*  
 *  Description :  constexpr与常量表达式
 *  Created by 旋风冲锋龙卷风 on 2022/11/27 16:17
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    //下面三个都是常量表达式
    const int max = 20;
    constexpr int mf = max;
    constexpr int limit = mf + 1;
    //constexpr string s = "adb";//string不属于"字面值类型",不能被定义为constexpr

}

constexpr int b = 1000;
int c = 10;
void test02()
{
    const int*p = nullptr;// p是一个指向整型常量的指针
    constexpr int *q = nullptr; //q是一个指向整数的常量指针
    int a = 100;
    constexpr const int *q1 = &b; //常量指针指向整形常量b
    constexpr const int *p1 = &c; //常量指针指向整数c,非常量转换成常量
    constexpr int* p2 = &c;
}
int main()
{

    return EXIT_SUCCESS;
}