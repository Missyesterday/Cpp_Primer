/*  
 *  Description : 含有可变形参的函数
 *  Created by 旋风冲锋龙卷风 on 2022/12/08 15:53
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <initializer_list>
using namespace std;

//可以传递可变数量的实参
void error_msg(initializer_list<string> li)
{
    for (auto beg = li.begin(); beg != li.end(); ++beg)
    {
        cout << *beg << " ";
    }
}


void test01()
{
    string msg = "error";
    //必须把序列放在花括号中
    error_msg({"hello", "world", msg });
    error_msg({msg, "world"});
}

void error_msg(int n, initializer_list<string> li)
{

}

void test02()
{
    error_msg(5, {"hello", "world"});
}
int main()
{

    return EXIT_SUCCESS;
}