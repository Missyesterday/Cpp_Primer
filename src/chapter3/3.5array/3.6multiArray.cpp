/*  
 *  Description : 多维数组
 *  Created by 旋风冲锋龙卷风 on 2022/11/30 15:24
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    //多维数组的初始化有很多
    int ia[3][4] = {};

    //ia[1]是一个数组,但是数组不能给数组赋值, 所以不能用int a[4] = ia[1],需要使用引用
    int (&a)[4] = ia[1];

    //当然 指针也可以, 如果使用auto 关键字，会自动转为指针类型
    int *b = ia[1];

    //c指向一个数组，这个数组有4个元素
    int (*c)[4] = ia;
    //用指针访问数组
    for(int (*i)[4] = ia; i != ia + 3; i++)
    {
        for(int * j = *i; j != *i + 4; j++)
        {
            cout << *j << " " << endl;
        }
    }

}

void test02()
{
    int ia[3][4] = {};
    int count = 0;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 4; j++)
            ia[i][j] = count++;

    //注意除了最内层循环外, 其他所有的循环控制变量都应该用引用类型
    for(auto &row : ia)
        for(auto col : row)
        {
            cout << col << " ";
            col = 1;
            cout << col << " "; //能修改到col
        }

    cout << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}