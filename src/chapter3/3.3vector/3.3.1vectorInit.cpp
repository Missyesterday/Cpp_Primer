/*  
 *  Description : vector对象初始化中的()与{}
 *  Created by 旋风冲锋龙卷风 on 2022/11/29 15:22
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    vector<int> v1(10); //v1有10个元素, 每个值都是0
    vector<int> v2{10}; //v2有1个元素,该元素的值是10

    vector<int> v3(10, 1); //v3有10个元素, 每个值多是1
    vector<int> v4{10, 1}; //v4有2两个元素, 值分别是10 和 1

}

//()与{}
void test02()
{
    vector<string> v5{"hi"}; //正确,列表初始化
    //vector<string> v6("hi"); //不能用字面值来构造
    vector<string> v7(10); //正确
    vector<string> v8(10, "hi"); //正确
    vector<string> v9{10, "hi"}; //正确,当无法执行列表初始化, 会考虑其他方式处理
}

int main()
{

    return EXIT_SUCCESS;
}