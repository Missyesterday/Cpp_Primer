/*  
 *  Description : 数组的定义与初始化
 *  Created by 旋风冲锋龙卷风 on 2022/11/29 16:03
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;
unsigned cnt = 42; //不是常量表达式,
//string a1[cnt];//这种方式在函数体外报错
void test01()
{
    //数组的维度在编译时应该是已知的
    unsigned cnt = 42; //不是常量表达式
    string a1[cnt]; //cnt不是常量表达式,这种方式严格意义上来说是不可以的,但是可能编译器优化了,在函数体内不报错
    constexpr unsigned sz = 42;
    string a2[sz]; //这才是标准的常量表达式
    int arr[10]; //含有10个整型的数组
    int *parr[10]; //含有10个整型指针的数组
}

void test02()
{
    const unsigned sz = 3;
    int ial[sz] = {0, 1, 2}; //正常情况
    int a2[] = {0, 1, 2}; //编译器推测维度为3
    int a3[5] = {0, 1, 2}; //等价于 a3 = {0, 1, 2, 0, 0}
    string a4[3] = {"h1", "h2"}; //等价于a4 = {"h1", "h2", ""}
    //int a5[2] = {0, 1, 2}; //报错
    char a6[3] = {'a', 'b'};
    cout << (int)a6[0] << endl;
}

//char数组的特殊性
void test03()
{
    char a1[] = {'C', '+', '+'}; //列表初始化,这种方式没有空字符
    char a2[] = {'C', '+', '+', '\0'}; //显式添加空字符
    char a3[] = "C++"; //字符串字面值初始化, 有空字符
    //char a4[3] = "C++"; //报错,没有空间存放空字符
}

//不允许拷贝和赋值
void test04()
{
    int a[] = {0, 1, 2};//初始化一个数组
    //int a2[] = a; // 错误,不能使用一个数组初始化另一个数组
    int a2[2];
    //a2 = a; //错误,也不能将一个数组赋值给另一个数组
}

//复杂数组声明
void test05()
{
    int arr[10];
    int *ptrs[10]; //ptrs是一个含有10个int指针的数组
    //int &refs[10] = XX; //引用不是对象
    int (*Parray)[10] = &arr; //Parray指向一个含有10个整数的数组
    int (&Rarray)[10] = arr; //Rarray引用一个含有10个整数的数组
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}