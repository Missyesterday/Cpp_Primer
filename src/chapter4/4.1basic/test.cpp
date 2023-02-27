/*
 *  Description : 整个4.1章节
 *  Created by 旋风冲锋龙卷风 on 2022/12/01 15:39
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//求值顺序
//不要写未定义的代码
void test01()
{
    for(int j = 0; j < 1000; j++)
    {
        int i = 0;
        //优先级规定了运算对象的组合方式，但是很多情况下没有说明运算对象按照说明顺序求值
        //下面的代码在不同编译器的结果可能不同
        cout << i << " " << ++i << endl;
    }
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}