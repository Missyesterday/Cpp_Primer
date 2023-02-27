/*  
 *  Description : 
 *  Created by 旋风冲锋龙卷风 on 2022/11/18 00:09
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <math.h>

using namespace std;

void test01()
{
    //当给一个无符号的类型赋值超过它能表示的区间,结果是初始值对 无符号类型能表示的总数 取模
    //例如unsigned char表示的区间是[0,255]共256个数,所以是对256取模
    unsigned char c = -1;
    //char占一个字节,c为255
    cout << (int) c << endl;

    signed char c2 = 256;
    //c2未定义, 输出为0,结果是为定义的,程序可能继续工作,可能崩溃,可能生成垃圾数据
    cout << (int)c2 << endl;
}

void test02()
{
    unsigned u = 10;
    int i = -42;
    //两条cout的结果都为: 4294967264 (2 ^ 32 + - 42 + 10)
    //对于下面的表达式,首先会将i转换为无符号数,相当于给无符号数赋一个负数,同上,取模
    cout << u + i << endl;
    cout << i + u << endl;

    //结果同上
    long long x = pow(2, 32) - 42 + 10;
    cout << x << endl;
}

void test03()
{
    unsigned u1 = 42, u2 = 10;
    //当从无符号数减去一个值时,无论这个值是不是无符号数,我们都必须确保结果不能是一个负数
    //32
    cout << u1 - u2 << endl;
    //4294967264,结果取模
    cout << u2 - u1 << endl;

}



int main()
{
    test03();
    return EXIT_SUCCESS;
}