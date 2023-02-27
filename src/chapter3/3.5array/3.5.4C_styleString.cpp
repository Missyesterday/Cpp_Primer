/*  
 *  Description : C风格字符串
 *  Created by 旋风冲锋龙卷风 on 2022/11/30 14:25
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <cstring>
using namespace std;

void test01()
{
    //比较string对象
    string s1 = "abc";
    string s2 = "abcd";

    //string的比较直接用关系运算符
    if(s1 < s2)
    {
        cout << "s1 < s2" << endl;
    }
    else
    {
        cout << "s1 >= s2" << endl;
    }

    //比较C风格字符串
    const char ca1[] = "abc";
    const char ca2[] = "abcd";
    if(ca1 < ca2) //这样比较毫无意义,比较的是两个指针的值, 这两个指针指向不同对象, 结果无意义
    {

    }

    //需要使用 strcmp函数
    if(strcmp(ca1, ca2) < 0) //与两个string对象的比较一样
         {
         }
}

//连接或拷贝C风格字符串
void test02()
{

}

int main()
{

    return EXIT_SUCCESS;
}