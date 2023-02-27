/*  
 *  Description : 关于赋值运算符
 *  Created by 旋风冲锋龙卷风 on 2022/12/01 18:07
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//赋值运算的左侧对象必须是一个可修改的左值
void test01()
{
    int i = 0, j = 0, k = 0;//这是初始化， 不是赋值
    const int ci = i; //这是初始化， 不是赋值

    //下面的语句都是非法的
    // 1024 = k;// 字面值是右值
    // i + j = k; //算术表达式是右值
    // ci = k; //ci是常量左值

    //C++11新标准允许使用花括号的初始列表作为赋值语句的右侧运算对象
    //这种不允许窄化转换
    // k = {3.13};//窄化转换，错误
}

//赋值运算满足右结合律
void test02()
{
    int ival, jval;
    ival = jval = 0; //先计算jval = 0, 返回jval（左侧运算对象），再计算ival = jval
}

//赋值运算的优先级比较低

int getv()
{
    return 1;
}

void test03()
{
    int i;
    //先计算getv() < 0, 把这个bool值赋给i
    if(i = getv() < 0)
    {}
    //按照括号计算
    if((i = getv()) < 0)
    {}

    //赋值语句返回的是左侧操作对象
    if(i = 0) //假
    {
        cout << "i = 0" << endl;
    }
    if(i = 1) //真
    {
        cout << "i = 1" << endl;
    }
}

int main()
{
    test03();
    return EXIT_SUCCESS;
}