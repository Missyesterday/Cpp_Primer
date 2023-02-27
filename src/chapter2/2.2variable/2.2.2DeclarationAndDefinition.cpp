/*  
 *  Description : 变量的声明与定义
 *  Created by 旋风冲锋龙卷风 on 2022/11/26 00:42
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

extern int i = 1;//在函数体外可以初始化extern变量,但是这句话就不再是声明,而是定义

void test01()
{
    extern int i; //声明i而非定义i
    extern int i; //变量可以重复声明
    int j; //声明并定义i,只能定义一次
    // extern int i  = 1; //在函数体内不能初始化extern的变量,会引发错误

}

int main()
{

    return EXIT_SUCCESS;
}