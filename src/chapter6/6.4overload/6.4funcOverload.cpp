/*  
 *  Description : 函数重载
 *  Created by 旋风冲锋龙卷风 on 2022/12/29 13:46
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//比较两个string对象的长度,返回较短那个的引用
const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string & s1, string &s2)
{
    auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
    return const_cast<string &>(r);
}
string read();
void print(const string&);
void print(double );
void fooBar(int ival)
{
    bool read = false;//新作用域,这个read变量隐藏了外层的read函数
    // string s = read();//错误, read是一个bool变量,不是函数
    void print(int ); //新作用域,隐藏了之前所有的print
    print(3.13); //调用的是void print(int)
    // print("Value"); //错误,不能转换
}


int main()
{

    return EXIT_SUCCESS;
}