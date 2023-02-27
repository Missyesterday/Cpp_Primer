/*  
 *  Description : 
 *  Created by 旋风冲锋龙卷风 on 2022/11/29 00:59
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <cctype>

using namespace std;

void test01()
{
    string a = "abc";
    //string的size()函数返回值是string::size_type
    string::size_type size = a.size();
    //但是也可以用int类型来接收
    //string::size_type是个无符号整型
    if(size < -1)
    {
        cout << "证明string::size_type是无符号" << endl;
    }
}

void test02()
{
    //string s = "a" + "b";//错误, 不能把字面值直接相加, 哪怕后面再加string类型也不可以
    //必须保证 + 左右两边至少有一个string
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}