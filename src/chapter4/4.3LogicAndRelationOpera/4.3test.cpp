/*  
 *  Description : 用来测试逻辑和关系运算符
 *  Created by 旋风冲锋龙卷风 on 2022/12/01 17:59
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    int i = 1, j = 2, k = 3;
    //不是比较ijk的大小，而是先计算 i < j的结果得到一个bool值，再把这个bool值与k比较
    if(i < j < k)
    {

    }
}

int main()
{

    return EXIT_SUCCESS;
}