/*  
 *  Description : 类的静态成员
 *  Created by 旋风冲锋龙卷风 on 2023/01/08 21:33
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;
class Account
{
public:
    static double rate()
    {
        return 30.8;
    }
    static void rete(double);

private:
    //字面值常量类型的constexpr必须给定初始值,进行类内初始化
    static constexpr int period = 30;
    //非常量的静态值不能类内初始化
    static int s_a;
    //const的常量可以不初始化, 也可以初始化
    static const int s_b;
    static const int s_c = 30;
    double a[period];
};

//类外都不用加static关键字
//如果再类的内部提供了初始值, 则成员在类外的定义不能再指定一个初始值了
constexpr  int Account::period;
//类内未初始化的常量可以在类外初始化
int Account::s_a = 30;
const int Account::s_b = 3;
const int Account::s_c;


//一个类的静态成员的类型 可以是该类本身

class Bar
{
private:
    static Bar mem1;//正确,静态成员和指针可以是不完全类型
    Bar *mem2;
    // Bar mem3; //错误, 数据成员必须是完全类型
};
int main()
{

    return EXIT_SUCCESS;
}