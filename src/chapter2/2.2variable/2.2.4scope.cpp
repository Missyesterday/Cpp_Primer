/*  
 *  Description : 名字的作用域
 *  Created by 旋风冲锋龙卷风 on 2022/11/26 01:07
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>


int reused = 42; //定义一个全局作用域的变量reused

void test01()
{
    int unique = 0; //定义一个块作用域的变量unique
    // 42 0
    std::cout << reused << " " << unique << std::endl;

    //新建局部变量reused覆盖全局变量
    //可以是不同类型
    double resued = 1.1;
    std::cout << resued << " " << unique << std::endl;

    //如果被覆盖了还想访问全局变量,需要使用::显式访问
    std::cout << ::reused << std::endl;


}

int i = 42;
void test02()
{
   int i = 100;
   int j = i;
   std::cout << j << std::endl;
}

void test03()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
}

int main()
{
    test03();
    return EXIT_SUCCESS;
}