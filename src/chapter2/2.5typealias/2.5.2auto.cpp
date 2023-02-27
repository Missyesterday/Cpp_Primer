/*  
 *  Description :
 *  Created by 旋风冲锋龙卷风 on 2022/11/27 21:14
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//引用与auto
void test03()
{
    int i = 0, &r = i;
    auto a = r; //a是一个整数
}

//指针与auto
void test04()
{
    int i = 0;
    const int ci = i, &cr = ci;
    auto b = ci; //ci是一个整数,顶层const被忽略
    auto c = cr; //c也是一个整数
    auto d = &i; //d是一个int指针
    auto e = &ci;//e也是也个指针,但是指向常量,底层const不会被忽略
}

int main()
{

    return EXIT_SUCCESS;
}