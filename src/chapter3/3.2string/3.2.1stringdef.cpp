/*  
 *  Description : string类型的定义与初始化
 *  Created by 旋风冲锋龙卷风 on 2022/11/29 14:46
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <string>
using namespace std;

void test01()
{
    string s1; //默认初始化,s1是一个空字符串, 如果不使用=则执行直接初始化
    string s2 = s1;// s2是s1的副本,如果使用了=,则执行拷贝初始化
    string s3 = "abc"; //拷贝初始化
    string s4("bcd"); //直接初始化
    string s5(10, 'c');//直接初始化, 10个c

    cout << s5[9] << endl; //string对象可以用[]随机访问
}

//string 和 字面量 相加: 必须满足每个加法运算符+两侧运算对象有一个是string
void test02()
{
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + ", " + s2; //正确,
    //string s4 = "hello" + ", " + s2;// 错误, 第一个+两边都是字面量
    //C++字符串字面值并不是标准库类型的string的对象
}

int main()
{

    return EXIT_SUCCESS;
}