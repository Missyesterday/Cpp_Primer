/*  
 *  Description : string与C风格字符串的接口
 *  *  Created by 旋风冲锋龙卷风 on 2022/11/30 14:41
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    //允许使用C风格字符串来初始化string类
    string s("hello, world!");
    s = "hello!"; //允许使用C风格字符串给string对象赋值

    //c_str() 是string的一个成员函数, 返回一个C风格字符串, 当然返回值是一个const char*
    const char* cstr = s.c_str();

    //但是修改string对象也会修改对应的c_str()返回值
    //输出hello
    for(auto i = cstr; *i != '\0'; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    s = "abc";
    //输出 abc, 所以最好把结果拷贝
    for(auto i = cstr; *i != '\0'; i++)
    {
        cout << *i << " ";
    }
}

//使用数组给vector初始化
void test02()
{
    int arr[] = {1, 2, 3, 4, 5};

    //不能直接用数组
    // vector<int> v(arr); //错误

    //需要指定区间
    //区间可以自定义
    vector<int> v0(begin(arr), end(arr));
    vector<int> v(arr, arr + 5);
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}